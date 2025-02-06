import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ2864 {
	public static void main(String[] args) throws IOException {
 
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());

		String a = st.nextToken();
		String b = st.nextToken();

		a = a.replace('6', '5');
		b = b.replace('6', '5');
		int min = Integer.valueOf(a)+Integer.valueOf(b);

		a = a.replace('5', '6');
		b = b.replace('5', '6');
		int max = Integer.valueOf(a)+Integer.valueOf(b);

		System.out.println(min+" "+max);
	}	
}
