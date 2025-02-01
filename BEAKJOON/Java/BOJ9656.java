import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

//돌 게임2
public class BOJ9656 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        
        if(n%2==0){
            System.out.println("SK");
        }else {
            System.out.println("CY");
        }
    }
}
