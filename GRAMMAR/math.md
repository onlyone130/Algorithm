## java.lang.math 클래스

Math 클래스는 수학에서 쓰이는 함수나 상수들을 구현해놓은 클래스이다.

Math 클래스의 모든 메소드는 static method이기 때문에 바로 사용 가능하다.

#### Math.pow()

* pow는 power를 의미하며, 거듭제곱을 뜻한다. 

* pow는 전달된 두 개의 double 형 인자를 가지고 제곱 연산을 수행한다.

+ Math.pow(double a, double n) => a의 n승, a를 n번 곱한 값을 리턴한다. (= a^n)

```java
double result = Math.pow(2,4);
System.out.println(result); //출력 16.0

double result1 = Math.pow(2.5, 3);
System.out.println(reusult1); //15.625

int resultInt = (int) Math.pow(2.5, 3);
System.out.println(resultInt); //15
```


#### Math.sqrt()

* sqrt는 Square Root를 의미하며, 제곱근을 뜻한다.

* sqrt는 double 형의 값의 제곱근을 반환한다.

* 인자로 a를 전달하면 a의 제곱근 리턴

* 인자로 0을 전달하면 0이 리턴

* 인자로 음수나 NaN(Not a Number)를 전달하면 NaN이 리턴

+ Math.sqrt(double a) => a의 제곱근

```java
double a = 16;
double b = 121;
double c = 10;


System.out.println(Math.sqrt(a)); //출력 4.0
System.out.println(Math.sqrt(b)); //11.0
System.out.println(Math.sqrt(c)); //3.1622776601683795
```
