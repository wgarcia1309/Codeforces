//11350 - Stern-Brocot Tree
//https://uva.onlinejudge.org/external/113/11350.pdf
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        for (int j = 0; j < n; j++) {
           long a = 1, b = 1, andera = 1, anderb = 0, anizqa = 0, anizqb = 1;
            String val = br.readLine();
            for (int i = 0; i < val.length(); i++) {
                switch (val.charAt(i)) {
                    case 'R':
                        anizqa = a;
                        anizqb = b;
                        a += andera;
                        b += anderb;
                        break;
                    case 'L':
                        andera = a;
                        anderb = b;
                        a += anizqa;
                        b += anizqb;
                        break;
                }
            }
            System.out.println(a+"/"+b);
        }
    }

}
