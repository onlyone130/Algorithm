import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

//k번째 수
public class BOJ11004 {
    public static void main(String[] args)throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());

        int ary[] = new int[n];

        st = new StringTokenizer(br.readLine());
        for(int i=0;i<n;i++){
            ary[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(ary);

        System.out.println(ary[k-1]);
    }
}
