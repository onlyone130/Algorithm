import java.util.*;

public class Main {
    static boolean[][] graph;
    static boolean[] visited;
    static int n,m;
    static int answer;

    public static void dfs(int idx) {
        answer++;
        visited[idx] = true;
        for (int i = 1; i<=n ;i++) {
            if (!visited[i] && graph[idx][i])
                dfs(i);
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        m = sc.nextInt();


        graph = new boolean[n+1][n+1];
        visited = new boolean[n+1];

        //그래프 정보 입력

        int x,y;
        for (int i = 0; i<m;i++) {
            x = sc.nextInt();
            y = sc.nextInt();
            graph[x][y] = graph[y][x] = true;
        }

        //dfs 및 결과 출력

        dfs(1);

        //가장 첫번째 감염된 노드는 제외해야하기 때문에 -1 해주기.
        System.out.println(answer - 1);

        sc.close();
    }
}
