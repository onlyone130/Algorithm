import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ1075 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int f = Integer.parseInt(br.readLine());

        n -= (n%100);
		
		while(n%f !=0) {
			if(n%f == 0) {
				break;
			}
			n++;
		}
		System.out.format("%02d", (n%100));
    }
}
