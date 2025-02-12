import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

//0의 개수
public class BOJ11170 {
    public static void main(String[] args)throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        for(int i=0;i<t;i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());
            int cnt = 0;

            for(int j=n;j<=m;j++){
                String str = String.valueOf(j);
                for(char c : str.toCharArray()){
                    if(c=='0'){
                        cnt++;
                    }
                }
            }
            System.out.println(cnt);
        }
    }
}
