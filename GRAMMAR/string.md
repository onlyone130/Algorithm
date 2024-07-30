### Java에서의 문자열 분리 (3)

1. 'split()' 메서드를 사용한 문자열 분리

* ',' 를 기준으로 문자열을 분리하여 배열로 반환한다. 각 요소는 for 루프를 통해 출력된다.

```java
public class SplitExample {
    public static void main(String[] args) {
        String str = "apple,banana,orange";
        String[] fruits = str.split(",");

        for (String fruit : fruits) {
            System.out.println(fruit);
        }
    }
}
```

2. 'StringTokenizer' 클래스를 이용한 문자열 분리

* 지정된 구분자를 기준으로 문자열을 분리한다. 

* hasMoreTokens() 메서드로 다음 토큰이 있는지 확인하고, nextToken() 메서드로 다음 토큰을 가져온다.

```java
import java.util.StringTokenizer;

public class StringTokenizerExample {
    public static void main(String[] args) {
        String str = "apple,banana,orange";
        StringTokenizer tokenizer = new StringTokenizer(str, ",");

        while (tokenizer.hasMoreTokens()) {
            System.out.println(tokenizer.nextToken());
        }
    }
}

```

3. 'Scanner' 클래스를 이용한 문자열 분리

* 기본적으로 공백을 기준으로 문자열을 분리한다. 

* hasNext() 메서드로 다음 토큰이 있는지 확인하고, next() 메서드로 다음 토큰을 가져온다.

```java
import java.util.Scanner;

public class ScannerExample {
    public static void main(String[] args) {
        String str = "apple banana orange";
        Scanner scanner = new Scanner(str);
        
        while (scanner.hasNext()) {
            System.out.println(scanner.next());
        }
        
        scanner.close();
    }
}

```

4. 'Pattern' 클래스를 이용한 문자열 분리

* 'Pattern' 클래스의 split() 메서드를 사용하여 정규 표현식에 따라 문자열을 분리할 수 있다. 

* 이 방법은 정규 표현식을 사용할 때 유용하게 쓰인다.

```java
import java.util.regex.Pattern;

public class PatternExample {
    public static void main(String[] args) {
        String str = "apple,banana,orange";
        Pattern pattern = Pattern.compile(",");
        String[] fruits = pattern.split(str);

        for (String fruit : fruits) {
            System.out.println(fruit);
        }
    }
}

```
