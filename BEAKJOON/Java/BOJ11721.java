import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

//열 개씩 끊어 출력하기
public class BOJ11721 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
  
        String s = br.readLine();
        for (int i = 0; i < s.length(); i ++) {            
            System.out.print(s.charAt(i));                        
            if ((i + 1) % 10 == 0) {                
                System.out.println();            
            }        
        }         
        br.close();
    }
}
