import java.io.IOException;
import java.util.Scanner;

public class Main {
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
            //3개짜리 범위가 나올 것
            int temp[] = new int[e-s+1];
            int idx = 0;
            //뒤집어서 저장
            for(int j=e; j>=s;j--){
                temp[idx++] = a[j];
            }
            //idx 0으로 초기화
            idx = 0;
            //swap 해주기
            //역순으로 복사가 될 것.
            for(int j=s;j<=e;j++){
                a[j] = temp[idx++];
            }
        }
        for(int i=1;i<=n;i++){
            System.out.print(a[i]+ " ");
        }
    }
}
