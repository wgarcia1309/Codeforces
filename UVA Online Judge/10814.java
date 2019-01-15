//10814 - Simplifying Fractions
//https://uva.onlinejudge.org/external/108/10814.pdf
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {
  public static BigInteger gcd(BigInteger a,BigInteger b){
        if(b.compareTo(BigInteger.ZERO)==0)return a;
        return gcd(b,a.mod(b));

    }
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int n;
        n = Integer.parseInt(in.readLine());
        for (int i = 1; i <= n; i++) {
            String s;
            s = in.readLine();
            BigInteger a,b,d;
            a=new BigInteger((s.split(" / ")[0]) );
            b=new BigInteger((s.split(" / ")[1]));
            d=gcd(a,b);
            System.out.println(a.divide(d)+" / "+b.divide(d));
        }
    }
}
