import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

//점수계산
public class BOJ2506 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    
        int n = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i] = Integer.parseInt(st.nextToken());
        }

        int score = 0;
        int current = 0; 

        for (int i=0;i<n;i++) {
            if (arr[i]==1) {
                current++;
                score += current; 
            } else {
                current = 0; 
            }
        }
        System.out.println(score);
    }
}
