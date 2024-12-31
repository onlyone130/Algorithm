//50점, 부분성공 코드
import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException{
        int r = 31;
        int m = 1234567891;

        Scanner sc = new Scanner(System.in);
        int L = sc.nextInt();
        char[] text = sc.next().toCharArray();

        int sum = 0;

        for (int i=0;i<L;i++) {
            int v = text[i] - 'a' + 1;
            int a = (int)Math.pow(r, i);
            int temp = v*a;
            sum += temp;
        }
        System.out.println(sum%m);
    }
}
