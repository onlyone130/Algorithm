import java.io.*;
import java.util.HashMap;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
       
        int t = Integer.parseInt(br.readLine());
        for (int tc=0;tc<t;tc++) {
            //1. n개의 옷 입력받기
            int n = Integer.parseInt(br.readLine());
            HashMap<String, Integer> hash = new HashMap<>();

            for(int i=0;i<n;i++){
                StringTokenizer st = new StringTokenizer(br.readLine());
                st.nextToken();
                String type = st.nextToken();
                //값이 있었으면 가져오고, 값이 없었다면 0을 가져오겠다.
                hash.put(type, hash.getOrDefault(type, 0)+1);
            }
            //2. 전체 경우의 수 출력
            int answer = 1;
            for(int val:hash.values())
                answer *= val +1;
            bw.write(String.valueOf(answer-1));
            bw.newLine();
        }
        bw.close();
        br.close();
    }

}
