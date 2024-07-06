import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String[] inputs = br.readLine().split(" ");
        
        int width = Integer.parseInt(inputs[0]);
        int height = Integer.parseInt(inputs[1]);

		double area = width*height*0.5;

		System.out.println(area);
	}
}
