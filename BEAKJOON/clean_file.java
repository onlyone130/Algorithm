import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.StringTokenizer;

public class Main {
    public static long C;
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int num = Integer.parseInt(br.readLine());

        Map<String, Integer> map = new HashMap<>();
        List<String> list = new ArrayList<>();

        for (int i=0;i<num;i++){
            StringTokenizer st = new StringTokenizer(br.readLine(),".");
            st.nextToken();
            
            String extenstion = st.nextToken();

            if(!map.containsKey(extenstion)) list.add(extenstion);
            map.put(extenstion, map.getOrDefault(extenstion,0)+1);
        }
        Collections.sort(list);
        StringBuilder sb = new StringBuilder();
        for(String s : list) {
            sb.append(s + " " + map.get(s) + "\n");
        }
        System.out.print(sb);
    }
}
