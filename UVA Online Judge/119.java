//119 - Greedy Gift Givers
//https://uva.onlinejudge.org/external/1/119.pdf
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
public class Main {
    public static void main(String[] args) throws IOException {
      BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
      boolean x=false;
      while(br.ready()){
        int n;
        if(x)System.out.println();
        n=Integer.parseInt(br.readLine());
        x=true;
        String msg= br.readLine();
        String personas[]=msg.split(" ");
        int money[] = new int [n];
        for (int j = 0; j < n; j++) {
            msg= br.readLine();
            StringTokenizer st= new StringTokenizer(msg," ");
            msg=st.nextToken();
            int z=0;
            for (int i = 0; i <n ; i++) {
                if(personas[i].equals(msg))z=i;
            }
            int regalo=Integer.parseInt(st.nextToken()),cantidad=Integer.parseInt(st.nextToken());
            if(cantidad!=0){
                money[z]-=regalo-regalo%cantidad;
                for (int i = 0; i < cantidad; i++) {
                    String amigo=st.nextToken();
                    int k=0;while(!amigo.equals(personas[k])){
                        k++;
                    }
                    money[k]+=regalo/cantidad;
                }
            }
        }
        for (int i = 0; i <n ; i++) {
            System.out.println(personas[i]+" "+money[i]);
        }
      }
    }
}
