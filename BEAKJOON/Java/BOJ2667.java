import java.io.*;
import java.util.*;

public class BOJ2667 {
   final static int MAX = 25+10;
   static boolean[][] graph;
   static boolean[][] visited;
   static int countPerDanji;
   static int dirY[] = {1,-1,0,0};
   static int dirX[] = {0,0,1,-1};

   static void dfs(int y, int x){
    visited[y][x] = true;
    countPerDanji++;

    for (int i=0;i<4;i++){
        int newY = y+dirY[i];
        int newX = x+dirX[i];
        if (!visited[newY][newX] && graph[newY][newX])
            dfs(newY, newX);
    }
   }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        graph = new boolean[MAX][MAX];
        visited = new boolean[MAX][MAX];
        for(int i = 1; i<= n; i++){
            String s = br.readLine();
            for (int j =1; j<=n; j++)
            graph[i][j] = s.charAt(j-1) == '1';
        }
        ArrayList<Integer> countList = new ArrayList<>();
        for (int i=1;i<=n;i++)
            for (int j=1; j<=n; j++)
                if (graph[i][j] && !visited[i][j]){
                    countPerDanji = 0;
                    dfs(i,j);
                    countList.add(countPerDanji);
                }

        System.out.println(countList.size());

        Collections.sort(countList);
        for (int i=0; i< countList.size(); i++)
                System.out.println(countList.get(i));

        br.close();
    }
}
