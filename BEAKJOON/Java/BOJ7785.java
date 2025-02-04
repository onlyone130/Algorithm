import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.StringTokenizer;

public class BOJ7785 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       
        int n = Integer.parseInt(br.readLine());

        HashSet<String> m = new HashSet<>();
        for(int i=0;i<n;i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            String name = st.nextToken();
            String go = st.nextToken();

            if (go.equals("enter")) {
                m.add(name);
            }else {
                m.remove(name);
            }
        }
        List<String> named = new ArrayList<>(m);
        Collections.sort(named, Collections.reverseOrder());

        for(String name : named){
            System.out.println(name);
        }
    }
}
