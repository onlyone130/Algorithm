import java.util.Scanner;

public class BOJ2884 {
 
	public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        sc.close();

        if (b<45) {
            a--;
            b = 60-(45-b);
            if(a<0){
                a=23;
            }
            System.out.println(a+" "+b);
        }else {
            System.out.println(a+" "+(b-45));
        }
	}
}
