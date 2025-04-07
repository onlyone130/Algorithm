import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

//수 정렬하기 2
public class BOJ2751 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int ary[] = new int[n];
        
        for(int i = 0; i < n; i++){
            ary[i] = Integer.parseInt(br.readLine());
        }

        Arrays.sort(ary);
        /*for(int i = 0; i < n; i++){
            System.out.println(ary[i]);
        }*/
        StringBuilder sb = new StringBuilder();
        for(int i = 0; i < n; i++){
            sb.append(ary[i]).append('\n');
        }
        System.out.println(sb);
    }
}