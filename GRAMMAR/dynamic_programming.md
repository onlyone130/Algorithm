## 동적 계획법(Dynamic Programming, DP)

동적 계획법(Dynamic Programming, DP)은 복잡한 문제를 단순한 부분 문제들로 나누어 해결하려는 알고리즘이다.

주로 최적화 문제를 해결하는 데 사용되며, 문제를 해결하는 과정에서 동일한 부분 문제를 반복적으로 해결하지 않도록 함으로써 효율성을 높인다.

DP는 두 가지 주요 접근 방식, 탑다운(top-down) 방식과 바텀업(bottomm-up) 접근법을 통해 구현될 수 있다.


##### top-down 방식 (메모이제이션)

* memo라는 해시맵을 사용하여 이미 계산된 피보나치 수를 저장.
* 재귀를 사용하여 피보나치 수를 계산하며, 이미 계산된 값은 memo에서 가져와 재사용.


```java
import java.util.HashMap;

public class FibonacciTopDown {
    private HashMap<Integer, Integer> memo = new HashMap<>();

    public int fib(int n) {
        if (memo.containsKey(n)) {
            return memo.get(n);
        }
        if (n <= 1) {
            return n;
        }
        int result = fib(n - 1) + fib(n - 2);
        memo.put(n, result);
        return result;
    }

    public static void main(String[] args) {
        FibonacciTopDown fib = new FibonacciTopDown();
        System.out.println(fib.fib(10)); // 예: 55
    }
}
```

##### bottom-up 방식 (테이블 작성)

* dp라는 배열을 사용하여 피보나치 수를 저장.
* 반복문을 사용하여 작은 부분 문제부터 차례대로 해결하여 최종 결과를 얻음.

```java
public class FibonacciBottomUp {
    public int fib(int n) {
        if (n <= 1) {
            return n;
        }
        int[] dp = new int[n + 1];
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }

    public static void main(String[] args) {
        FibonacciBottomUp fib = new FibonacciBottomUp();
        System.out.println(fib.fib(10)); // 예: 55
    }
}

```

