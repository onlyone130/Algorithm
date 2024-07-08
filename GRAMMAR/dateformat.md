### java 오늘 날짜 출력

오늘 날짜를 "YYYY-MM-DD" 형식으로 출력한다.

```java
import java.text.SimpleDateFormat;
import java.util.Calendar;

public class Main {
    public static void main(String[] args) {

        SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd");

        Calendar c = Calendar.getInstance();

        String today = sdf.format(c.getTime());

        System.out.println(today);
    }
}
```

* 위와 같이 데이터 포멧형식을 "yyyy-MM-dd" 로 설정해야 정확한 오늘 날짜를 출력할 수 있다.

* 만약, "YYYY-MM-DD"와 같이 모두 대문자로 써버리게 되면 제대로 된 출력값이 나오지 않는다.
