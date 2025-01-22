import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ1157 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String s = br.readLine().toUpperCase();
        int arr[] = new int[26];
        int max = 0;
        char c = '?';

        //String[] words = s.split("");
        for(int i=0;i<s.length();i++){
            arr[s.charAt(i)-'A']++;
        }
        for(int i=0;i<26;i++){
            if (arr[i]>max) {
                max = arr[i];
                c = (char)(i+65);
            } else if (arr[i]==max) {
                c = '?';
            }
        }
        System.out.println(c);
    }
}
