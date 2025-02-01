import java.io.IOException;
import java.util.Scanner;

//공 바꾸기
public class BOJ10813 {
    public static void main(String[] args) throws IOException{
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();
        int a[] = new int[n+1];

        for(int i=1;i<=n;i++){
            //자신과 번호가 같은 공 넣어주기
            a[i] = i;
        }
        //바꾸기
        for(int i=0;i<m;i++){
            int s = sc.nextInt();
            int e = sc.nextInt();
            //swap 해주기
            int temp = a[s];
            a[s] = a[e];
            a[e] = temp;
        }
        for(int i=1;i<=n;i++){
            System.out.print(a[i]+ " ");
        }
    }
}
