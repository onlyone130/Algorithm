import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ11399 {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int num = Integer.parseInt(br.readLine());

        StringTokenizer st =  new StringTokenizer(br.readLine(), " ");

        int[] arr = new int[1001];

        while (num-- > 0) {
            arr[Integer.parseInt(st.nextToken())]++;
        }

        int p = 0;
        int sum = 0;

        for (int i=0;i<1001;i++) {
            while(arr[i]-- > 0) {
                sum += (i + p);
                p += i;
            }
        }
        System.out.println(sum);
    }
 }
