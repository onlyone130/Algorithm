import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

//16진수
public class BOJ1550 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();

        int decimal = Integer.parseInt(s,16);

        System.out.println(decimal);
    }
}
