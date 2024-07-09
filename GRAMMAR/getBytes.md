## getBytes()

getBytes() 메서드는 String(문자열)을 default charset으로 인코딩하여 byte 배열로 반환해준다.

```java
public byte[] getBytes() {
    return StringCoding.encode(value, 0, value.length);
}
```

* 이 문자열(String)을 플랫폼의 dafault charset을 사용하여 바이트의 시퀀스로 인코딩하고, 새로운 바이트 배열에 결과를 저장한다.

* 이 문자열이 default charset으로 인코딩할 수 없는 경우 이 메서드의 동작은 지정되지 않는다.

* java.nio.charset.CharsetEncoder 클래스는 인코딩 과정에 더 많은 제어가 필요할 때 사용한다.

==> 우리가 사용하는 IDE의 default charset을 사용하여 문자열을 byte로 인코딩하여 byte 배열에 넣어서 반환해준다.


## getBytes(charset)

```java
public byer[] getBytes(Charset charset) {
    if (charset == null) throw new NullPointerException();
    return StringCoding.encode(charset, value, 0, value.length);
}
```

* 이 문자열(String)을 주어진 charset을 사용하여 byte의 시퀀스로 인코딩하고, 새로운 byte 배열에 결과를 저장한다.

* 매개변수(Params) : 문자열을 인코딩하는데 사용되는 Charset

* 반환값(Returns) : 위 내용에서 언급한 결과로 생긴 byte 배열

==> 매개변수로 받은 charset으로 문자열을 인코딩하여 byte 배열에 담아 반환해준다.
