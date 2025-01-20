import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    static boolean[][] visit;
    static char[][] a;
    static int n;
    static int dx[] = {-1,0,1,0};
    static int dy[] = {0,1,0,-1};
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        n = Integer.parseInt(br.readLine());

        a = new char[n+1][n+1];
        visit = new boolean[n+1][n+1];

        for(int i=0;i<n;i++){
            String s = br.readLine();
            for(int j=0;j<n;j++){
                a[i][j] = s.charAt(j);
            }
        }
        int cnt = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(!visit[i][j]){
                    dfs(i,j);
                    cnt++;
                }
            }
        }
        int cnt2 = cnt;
        cnt = 0;
        visit = new boolean[n+1][n+1];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]=='G'){
                    a[i][j] = 'R';
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(!visit[i][j]){
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        int cnt3 = cnt;
        System.out.println(cnt2+" "+cnt3);
    }
        public static void dfs(int x, int y){
            visit[x][y] = true;
            char tmp = a[x][y];
            for(int i=0;i<4;i++){
                int new_x = x+dx[i];
                int new_y = y+dy[i];
                
                if(new_x<0||new_y<0||new_x>n||new_y>n){
                    continue;
                }
                if(!visit[new_x][new_y]&&a[new_x][new_y]==tmp){
                    dfs(new_x, new_y);
                }
            }
        }
    }
