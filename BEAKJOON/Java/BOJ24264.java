import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ24264 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        long n = Long.parseLong(br.readLine());
        br.close();
        System.out.println(n*n);
        System.out.println(2);
    }
}