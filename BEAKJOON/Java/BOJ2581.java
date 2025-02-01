import java.io.IOException;
import java.util.Scanner;

//소수
public class BOJ2581 {
    public static void main(String[] args) throws IOException{
        int a[] = new int[10001];
        for (int i=2;i<10001;i++){
            a[i] = i;
        }

        //10000 이하의 소수 구하기
        //소수면 그 자리에 자기 값을 그대로 가지고 있고,
        //아니면 0으로 변경
        for (int i=2; i<Math.sqrt(10001); i++){
            if(a[i] == i){
                for (int j=i+i;j<10001;j=j+i){
                    a[j] = 0;
                }
            }
        }
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();
        int sum = 0;
        int min = 0;

        for (int i=n;i>=m;i--){
            sum += a[i];
            if (a[i] != 0) {
                min = a[i];
            }
        }
        if (sum == 0){
            System.out.println(-1);
        } else {
            System.out.println(sum);
            System.out.println(min);
        }
    }
}
