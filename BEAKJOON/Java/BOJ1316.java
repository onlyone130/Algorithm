import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine()); 
        int count = 0; 

        for (int i = 0; i < n; i++) {
            String word = br.readLine(); 
            if (isGroupWord(word)) {  
                count++;
            }
        }

        System.out.println(count);
    }

    public static boolean isGroupWord(String word) {
        boolean[] visited = new boolean[26]; 
        char prev = ' '; 

        for (int j = 0; j < word.length(); j++) {
            char current = word.charAt(j);

            if (current != prev) {
                if (visited[current - 'a']) {
                    return false;
                }
                visited[current - 'a'] = true; 
            }

            prev = current; 
        }

        return true; 
    }
}
