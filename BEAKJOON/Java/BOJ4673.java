//셀프 넘버
public class BOJ4673 {
    public static void main(String[] args){
        boolean check[] = new boolean[10001];
        //생성자보다 더 큰 셀프 넘버가 있을 수 없으니까 범위가 10000이다.
        for(int i=1; i < 10000; i++){
            int s = i; //생성자 자기 자신 더하는 로직
            char[] tmp = String.valueOf(i).toCharArray(); //i가 100이라면 100이라는 tmp 값이 나오게 된다.
            //각 자리수 숫자 더하기 로직
            for(int j=0;j<tmp.length;j++){
                s += Integer.parseInt(String.valueOf(tmp[j]));
            }
            //셀프 넘버가 아니라는 뜻
            if(s < 10001){
                check[s] = true;
            }
        }
        for(int i=1;i<=10000;i++){
            if(!check[i]){
                System.out.println(i);
            }
        }
    }
}
