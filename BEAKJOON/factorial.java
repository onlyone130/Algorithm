import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int a = Integer.parseInt(br.readLine());

		if (a < 0) {
			System.out.println("Invalid input: Factorial is not defined for negative numbers.");
		} else {
			System.out.println(factorial(a));
		}
	}

	static int factorial(int a) {
			if (a <= 1) {
			return 1;
			}
			return a*factorial(a-1);
			}
}
