import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

//덩치
public class BOJ7568 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        int ary[][] = new int[n][2];

        for(int i=0;i<n;i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            ary[i][0] = Integer.parseInt(st.nextToken());
            ary[i][1] = Integer.parseInt(st.nextToken());    
        }
        for(int i=0;i<n;i++){
            int size = 1;
            for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                if (ary[i][0]<ary[j][0]&&ary[i][1]<ary[j][1]) {
                    size++;
                }
            }
            System.out.print(size+" ");
        }
    }
}
