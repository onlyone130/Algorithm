### 제곱 시간 미만 정렬


#### merge sort

퀵 정렬은 nlogn인데, n^2까지 시간 복잡도가 증가한다.

그렇기 때문에 우리는 시간 복잡도가 nlogn인 merge sort를 배우게 된다.

merge sort 는 원래의 배열을 반씩 쪼갠다. (더이상 쪼갤 수 없을 때까지)

그리고 두 개를 비교해서 작은 것은 앞으로, 큰 것은 뒤로. (모든 원소를 합칠 때까지 반복)

이미 정렬된 것과 이미 정렬된 것을 합치면, 정렬된 것이 도출됨을 알 수 있다.

#### counting sort

카운팅 정렬은 수 많은 정렬 알고리즘 중 시간복잡도가 O(n)으로 엄청난 성능을 보여주는 알고리즘이다.

인덱스 값에 count를 부여하는 알고리즘으로, counting sort 자체로는 많이 쓰이지는 않지만, 사용되는 로직 자체는 어려운 알고리즘에서도 많이 활용된다.

### c++ 기본 정렬

```
void solve(){
    vector<int> arr = {2,0,24,4,54,1,2453,3455,13,24};
    sort(arr.begin(), arr.end());
    for(int i:arr){
        std::cout << i << " ";
    }
    std::cout << endl;

    arr = {2,0,24,4,54,1,2453,3455,13,24};
    sort(arr.begin()+3, arr.end());
    for(int i:arr){
        std::cout << i << " ";
    }
    std::cout << endl;

    arr = {2,0,24,4,54,1,2453,3455,13,24};
    sort(arr.begin(), arr.end()-3)
    for(int i:arr){
        std::cout << i << " ";
    }
    std::cout << endl;

    int arr2[] = {2,0,24,4,54,1,2453,3455,13,24};
    sort(arr2, arr2+10)
    for(int i:arr){
        std::cout << i << " ";
    }
    std::cout << endl;
}
```