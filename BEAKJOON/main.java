import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class main {
    public static void main(String[] args) throws IOException {
        // BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        // long n = Long.parseLong(br.readLine());
        // br.close();
        // System.out.println(n*n);
        // System.out.println(2);
        String str = "abacabcd";
        boolean[] ary = new boolean[256];
        System.out.print(fn(str,str.length()-1,ary));
    }

    public static String fn(String str, int index, boolean[] ary){
        if(index<0) return "";
        char c = str.charAt(index);
        System.out.println(c);
        String result = fn(str, index-1, ary);
        System.out.println(result);
        if(!ary[c]){
            ary[c]=true;
            System.out.println(ary[c]);
            return c+result;
        }
        return result;
    }
}