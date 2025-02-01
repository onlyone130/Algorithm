import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

//소트 인사이트
public class BOJ1427 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        char a[] = br.readLine().toCharArray();

        Arrays.sort(a);

        for(int i=a.length-1;i>=0;i--){
            System.out.print(a[i]);
        }
    }
}
