import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int a = Integer.parseInt(br.readLine().trim());
        
        int arr[][] = new int[15][15];

        for(int i=1;i<15;i++){
            arr[0][i] = i;
        }

        for(int i=1;i<15;i++){
            for(int j=1;j<15;j++){
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
            }
        }

        for(int i=0;i<a;i++){
            int k = Integer.parseInt(br.readLine());
            int n = Integer.parseInt(br.readLine());

            bw.write(arr[k][n]+"\n");
        }
        bw.flush();
        bw.close();
    }
}
