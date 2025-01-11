import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        String s = br.readLine();
        int n=1000-Integer.parseInt(s);
        int change[] = {500,100,50,10,5,1};
        int cnt = 0;

        for(int i=0;i<change.length;i++){
            cnt += n/change[i];
            n %= change[i];
        }
        System.out.println(cnt);
    }
}
