//260 - Il Gioco dell'X
//https://uva.onlinejudge.org/external/2/260.pdf

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static int adj[][];
    public static boolean visto[][], r;

    public static void dfs(int i, int j) {
        if (!r) {
            visto[i][j] = true;
            int n = adj.length;

            if(j==n-1){
                r=true;
            }
            //adyacentes
            if (i + 1 < n && j + 1 < n) {
                //(i, j + 1)
                if (adj[i][j + 1] == 1 && !visto[i][j + 1]){
                    dfs(i, j + 1);
                }
                //(i + 1, j)
                if (adj[i + 1][j] == 1 && !visto[i + 1][j]){
                    dfs(i + 1, j);
                }
                //(i + l, j + 1)
                if (adj[i + 1][j + 1] == 1 && !visto[i + 1][j + 1]){
                    dfs(i + 1, j + 1);
                }
            } else if (i + 1 < n && j + 1 >= n) {
                //(i + 1, j)
                if (adj[i + 1][j] == 1 && !visto[i + 1][j]){
                    dfs(i + 1, j);
                }
            } else if (i + 1 >= n && j + 1 < n) {
                //(i, j + 1)
                if (adj[i][j + 1] == 1 && !visto[i][j + 1]){
                    dfs(i, j + 1);
                }
            }
            //--
            if (i - 1 >= 0 && j - 1 >= 0) {
                //(i-1,j-1)
                if (adj[i - 1][j - 1] == 1 && !visto[i - 1][j - 1]){
                    dfs(i - 1, j - 1);
                }
                //(i,j-1)
                if (adj[i][j - 1] == 1 && !visto[i][j - 1]){
                    dfs(i, j - 1);
                }
                //(i-1,j)
                if (adj[i - 1][j] == 1 && !visto[i - 1][j]){
                    dfs(i - 1, j);
                }
            }else if(i - 1 >= 0 && j - 1 <0) {
                //(i-1,j)
                if (adj[i - 1][j] == 1 && !visto[i - 1][j])dfs(i - 1, j);
            }else if(i - 1 < 0 && j - 1 >=0){
                //(i,j-1)
                if (adj[i][j - 1] == 1 && !visto[i][j - 1]) dfs(i, j - 1);
            }
        }

    }

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(in.readLine());
        int k=1;
        while (n != 0) {
            adj = new int[n][n];
            visto = new boolean[n][n];
            r=false;
            String s;
            for (int i = 0; i < n; i++) {
                s = in.readLine();
                for (int j = 0; j < n; j++) {
                    if (s.charAt(j) == 'w') {
                        adj[i][j] = 1;
                    } else {
                        visto[i][j] = true;
                    }
                }
            }
            //dfs
            for (int i = 0; i < n; i++) {
                if (adj[i][0]==1 && !visto[i][0] && !r) {
                    dfs(i,0);
                }
            }
            if(r)System.out.println(k+" W");
            else System.out.println(k+" B");
            k++;
            n = Integer.parseInt(in.readLine());
        }
    }

}
