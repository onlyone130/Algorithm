##Stack (스택) 구현하기

DEFAULT_CAPACITY : 배열이 생성 될 때의 최초 할당 크기(용적)이자 최소 할당 용적 변수로 기본값은 10으로 설정함. (capacity가 용적)

EMPTY_ARRAY : 아무 것도 없는 빈 배열 (용적이 0인 배열)

array : 요소들을 담을 배열

size : 배열에 담긴 요소(원소)의 개수 변수 (용적 크기 X)

DEFAULT_CAPACITY 변수와 EMPTY_ARRAY 변수는 상수로 사용할 것이기 때문에 static final 키워드를 붙여준다.
