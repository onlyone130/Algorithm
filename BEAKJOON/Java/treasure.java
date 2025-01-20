import java.io.*;
import java.util.Arrays;
import java.util.Comparator;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
       
        int n = Integer.parseInt(br.readLine());
        int [] a = new int[n];
        st = new StringTokenizer(br.readLine());

        //배열 a의 각 원소를 순서대로 입력 받아 a배열에 저장
        for(int i=0;i<n;i++){
            a[i] = Integer.parseInt(st.nextToken());
        }

        //배열 a를 오름차순으로 정렬, a배열의 값이 작을수록 최종결과가 작아지므로, a의 원소를 정렬하여 최솟값과 최댓값의 순서대로 b의 반대 순서와 곱해주기 위해서...
        Arrays.sort(a);

        Integer [] b = new Integer[n];
        st = new StringTokenizer(br.readLine());

        for(int i=0;i<n;i++){
            b[i] = Integer.parseInt(st.nextToken());
        }

        //배열 b를 내림차순으로 정렬, a의 가장 작은 값과 b의 가장 큰 값을 곱하여 s값을 최소화할 수 있도록 하려고...
        Arrays.sort(b, Comparator.reverseOrder());

        int c = 0;
        //c에 최종 결과 저장. 최종 결과는 a와 b 배열의 각 원소를 곱하여 c에 누적하여 s의 최소값을 계산하는 것.
        for(int i=0;i<n;i++){
            c += a[i]*b[i];
        }
        
        bw.write(c+"\n");
        bw.flush();
        bw.close();
        br.close();
    }

}
