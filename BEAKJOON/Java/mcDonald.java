import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);

        int[] input = new int[5];

        for (int i = 0; i < 5; i++) {
            input[i] = sc.nextInt();
        }

        int min1 = Math.min(input[0], Math.min(input[1], input[2]));

        int min2 = Math.min(input[3], input[4]);

        System.out.println(min1+min2-50);
    }
}
