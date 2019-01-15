//10305 -Ordering Task
//https://uva.onlinejudge.org/external/103/10305.pdf
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static int adj[][];
    public static boolean visto[];
    public static int ts[],ind;
    public static void dfs2(int i){
        visto[i]=true;
        int n=adj.length;
        for (int j = 0; j < n; j++) {
            if(adj[i][j]!=0 && !visto[j]){
             dfs2(j);
            }
        }
        ts[ind]=i;
        ind++;
    }
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String s=in.readLine();
        int n=Integer.parseInt(s.split(" ")[0]),m=Integer.parseInt(s.split(" ")[1]);
        while(n!=0 || m!=0){
            adj= new int[n][n];
            for (int i = 0; i < m; i++) {
                s=in.readLine();
                int x=Integer.parseInt(s.split(" ")[0]),y=Integer.parseInt(s.split(" ")[1]);
                adj[x-1][y-1]=1;
            }
        visto=new boolean[n];
        ts=new int[n];
        ind=0;
            for (int i = 0; i < n; i++) {
                if(!visto[i]){
                    dfs2(i);
                }

            }
            for (int i = ind-1; i>0; i--) {
                System.out.print((ts[i]+1)+" ");
            }
         System.out.println((ts[0]+1));
        s=in.readLine();
        n=Integer.parseInt(s.split(" ")[0]);
        m=Integer.parseInt(s.split(" ")[1]);
        }
    }

}
