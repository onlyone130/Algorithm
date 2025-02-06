import java.util.Scanner;

public class BOJ25314{

	public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();

        for(int i=0;i<a;i++){
            if (i%4 == 0) {
                System.out.println("long");
            }
        }
        System.out.println("int");
    }
}
