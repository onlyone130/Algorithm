## Map - getOrDefault() 사용법

Map 에서 key 값으로 value 값을 취득하는 경우 get() 메소드를 사용한다.

이때, Map 에서 key 가 존재한다면 해당하는 key 의 value 값을 반환하고, 찾는 키가 없거나 null 이면 null 을 반환한다.

```java
import java.util.HashMap;
import java.util.Map;

public class Main {
    public static void main(String[] args) throws IOException {
        Map<String, String> map = new HashMap<>();

        map.out("red","빨강");
        map.out("blue","파랑");
        map.out("purple","보라");

        System.out.println(map.get("red"));  //출력 빨강
        System.out.println(map.get("blue"));  //파랑
        System.out.println(map.get("orange"));  //null
    }
}
```

    ### getOrDefault() 

    null 대신에 기본 값을 반환할 수 있는 메소드가 getOrDefault() 이다.

    ```java
    default V getOrDefault(Object key, V defaultValue) {
        V v;
        return ((v=get(key) != null) || containsKey(key))
        ? v
        :defaultValue:
    }
    ```

    getOrDefault(Object key, v defaultValue)

    * Object key : 찾는 key 값

    * V defaultValue : 찾는 key 의 value 값이 없거나 null 일 때 반환하는 값

    ==> 즉, key 가 존재하면 key의 value 값을 반환하고, 없거나 null 이면 defaultValue 를 반환한다.

    ## null 대신 기본 값을 반환하도록 할 수 있는 방법

    1. getOrDefault()


    ```java
    import java.util.HashMap;
    import java.util.Map;

    public class Main {
        public static void main(String[] args) throws IOException {
            Map<String, String> map = new HashMap<>();
    
            map.put("red", "빨강");
            map.put("blue", "파랑");
            map.put("purple", "보라");
    
            // getOrDefault()
            System.out.println(map.getOrDefault("red", "디폴트값")); //출력 빨강
            System.out.println(map.getOrDefault("blue", "디폴트값")); //파랑
            System.out.println(map.getOrDefault("orange", "디폴트값")); //디폴트값
        }
    }
    ```

    2. Optional.ofNullable(값).orElse("디폴트값")

    ```java
    import java.util.HashMap;
    import java.util.Map;

    public class Main {
        public static void main(String[] args) throws IOException {
            Map<String, String> map = new HashMap<>();
    
            map.put("red", "빨강");
            map.put("blue", "파랑");
            map.put("purple", "보라");
    
            // ofNullable()
            System.out.println(Optional.ofNullable(map.get("red")).orElse("디폴트값")); //출력 빨강
            System.out.println(Optional.ofNullable(map.get("purple")).orElse("디폴트값")); //보라
            System.out.println(Optional.ofNullable(map.get("yellow")).orElse("디폴트값")); //디폴트값
        }
    }
    ```
