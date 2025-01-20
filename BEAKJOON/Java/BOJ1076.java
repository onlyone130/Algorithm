import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;

public class BOJ1076 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        HashMap<String, String> map = new HashMap<>();
            map.put("black","0");
            map.put("brown","1");
            map.put("red","2");
            map.put("orange","3");
            map.put("yellow","4");
            map.put("green","5");
            map.put("blue","6");
            map.put("violet","7");
            map.put("grey","8");
            map.put("white","9");

        String a = br.readLine();
        String b = br.readLine();
        String c = br.readLine();

        long z = Long.parseLong(map.get(a)+map.get(b));
        z *= Math.pow(10.0, (double)Integer.parseInt(map.get(c)));
        System.out.println(z);
    }
}