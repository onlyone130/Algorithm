import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException{
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int a[] = new int[n];

        for (int i=0;i<n;i++){
            a[i] = sc.nextInt();
        }
        Arrays.sort(a);
        System.out.println(a[a.length-k]);
    }
}
