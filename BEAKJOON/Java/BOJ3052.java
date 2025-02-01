import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

//나머지
public class BOJ3052 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Set<Integer> mySet = new HashSet<>();

        for (int i=0;i<10;i++) {
            int temp = sc.nextInt()%42;
            mySet.add(temp);
        }
        System.out.println(mySet.size());
    }
}
