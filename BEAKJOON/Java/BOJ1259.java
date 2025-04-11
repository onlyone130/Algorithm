import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

//팰린드롬수
public class BOJ1259 {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        while(true){
            int n = Integer.parseInt(br.readLine());
            if(n == 0){
                break;
            }

            int n2 = n;
            int reverse = 0;
            while(n != 0){
                int digit =  n % 10;
                reverse = reverse * 10 + digit;
                n /= 10;
            }
            if(n2 == reverse){
                System.out.println("yes");
            } else {
                System.out.println("no");
            }
        }
    }
}