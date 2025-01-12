import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int n = Integer.parseInt(br.readLine());

        String s[] = new String[n];

        for(int i=0;i<n;i++){
            s[i] = br.readLine();
        }

        int len = s[0].length();
        StringBuilder sb = new StringBuilder();
        
        for(int i=0;i<len;i++){
            boolean b = true;
            char c = s[0].charAt(i);
            for(int j=1;j<n;j++){
                if(c != s[j].charAt(i)){
                    b = false;
                }
            }
            if(b){
                sb.append(c);
            }else{
                sb.append("?");
            }
        }
        System.out.print(sb);
    }
}
