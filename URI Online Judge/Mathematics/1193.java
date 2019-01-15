//Problem:
//https://www.urionlinejudge.com.br/judge/en/problems/view/1193
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int n;
        n = Integer.parseInt(in.readLine());
        for (int i=1;i<=n ;i++ ) {
          String  nbr;
          String s;
          s=in.readLine();
          nbr=s.split(" ")[0];
          s=s.split(" ")[1];
          System.out.print("Case "+i+":\n");
          if(s.equals("bin")){
              int nb=Integer.parseInt(nbr,2);
              System.out.println(nb+" dec\n"+Integer.toHexString(nb)+" hex\n");
          }else if(s.equals("dec")){
              int nb=Integer.parseInt(nbr);
              System.out.println(Integer.toHexString(nb)+" hex\n"+Integer.toBinaryString(nb)+" bin\n");
          }else if(s.equals("hex")){
              int nb=Integer.parseInt(nbr,16);
              System.out.println(nb+" dec\n"+Integer.toBinaryString(nb)+" bin\n");
          }
        }
    }

}
