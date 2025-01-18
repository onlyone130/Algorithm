import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        for (int i=0;i<n;i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int ary[] = new int[a];
            double sum = 0;
            
            for(int j=0;j<a;j++){
                int val = Integer.parseInt(st.nextToken());
                ary[j] = val;
				sum += val;
            }
            double mean = (sum/a) ;
			double count = 0;

            for(int j=0;j<a;j++) {
				if(ary[j] > mean) {
					count++;
				}
			}
            System.out.printf("%.3f%%\n",(count/a)*100);
        }
        
    }
}
