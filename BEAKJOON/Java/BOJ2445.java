import java.io.IOException;
import java.util.Scanner;

//별 찍기8
public class BOJ2445 {
    public static void main(String[] args) throws IOException{
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for(int i=0; i<n; i++){
            for(int j=0;j<2*n;j++){
                if(j<=i || i+j>=2*n-1){
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }

        for(int i=n; i<2*n; i++){
            for(int j=0;j<2*n;j++){
                if(j>i || i+j<2*n-1){
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
