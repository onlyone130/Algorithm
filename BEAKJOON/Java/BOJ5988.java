import java.io.IOException;
import java.util.Scanner;

public class BOJ5988 {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int a =  sc.nextInt();
        if(a != 0){
            for (int i = 0; i < a; i++) {
                String[] arr = sc.next().split("");
                System.out.println(Integer.parseInt(arr[arr.length - 1]) % 2 == 1 ? "odd": "even");
            }
        }
    }
}
