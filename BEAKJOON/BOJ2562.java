import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int a[] = new int[9];
        int max = Integer.MIN_VALUE;
        int idx = 0;

        for(int i=0;i<9;i++){
            a[i] = Integer.parseInt(br.readLine());
            if(a[i]>max){
                max = a[i];
                idx = i+1;
            }
        }
        System.out.println(max);
        System.out.println(idx);
    }
}
