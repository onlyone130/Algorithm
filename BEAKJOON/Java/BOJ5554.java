import java.util.Scanner;

//심부름 가는 길
public class BOJ5554 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int s = 0;
        for(int i=0; i<4;i++){
            s+=sc.nextInt();
        }
        System.out.println(s/60);
        System.out.println(s%60);
    }
}
