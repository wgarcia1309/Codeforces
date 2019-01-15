//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1557
import java.io.IOException;
import java.util.Scanner;
public class Main {

    public static void main(String[] args) throws IOException {
    int[][] v = new int[15][15];
        Scanner sc = new Scanner(System.in);
        int c=0;
        while (true) {
            int n = sc.nextInt();
            if (n == 0)break;
            if(c!=0) System.out.println("");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++)
                    v[i][j] = (int) Math.pow(2, i + j);
            }
            int u = O(v[n - 1][n - 1]);
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    int s = O(v[i][j]);
                    if (j == n - 1 && n!=1) {
                        for (int k = 0; k < u-s+ 1; k++)
                                System.out.print(" ");
                        System.out.println(v[i][j]);
                    } else if (j > 0 && j < n - 1) {
                            for (int k = 0; k <= u-O(v[n - 1][j])+O(v[n - 1][j])-s; k++)
                                System.out.print(" ");
                        System.out.print(v[i][j]);
                    } else {
                            for (int k = 0; k < u - s; k++)
                                System.out.print(" ");
                        System.out.print(v[i][j]);
                        if(n==1)System.out.println("");
                    }
                }
            }
            System.out.println("");
        }
    }
    private static int O(int a) {
        return String.valueOf(a).length();
    }
}
