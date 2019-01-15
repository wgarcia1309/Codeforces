//10551 - Basic Remains
//https://uva.onlinejudge.org/external/105/10551.pdf
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {
  public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        while(true){
            String s[]=(in.readLine()).split(" ");
            int i = Integer.parseInt(s[0]);
            if(i==0)break;
            BigInteger a,b;
            a=new BigInteger(s[1],i);
            b=new BigInteger(s[2],i);
            System.out.println(Integer.toString( Integer.parseInt(a.mod(b).toString()),i) );

        }
    }
}
