//10400 - Game Show Math
//https://uva.onlinejudge.org/external/104/10400.pdf
//package test;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
public class Main {

    public static boolean exp;
    public static int r,p[];
    public static boolean noviable[][];
    public static String signos[];
    public static void main(String[] args) throws IOException {
        int n;
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw= new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        n=Integer.parseInt(br.readLine());
        for (int i = 0; i < n; i++) {
            exp=false;
            String frase[]=br.readLine().split(" ");
            int s=Integer.parseInt(frase[0]);
            noviable= new boolean[100][64001];
            p=new int[s];
            signos= new String[s];
            for (int j = 0; j < s; j++) {
                p[j]=Integer.parseInt(frase[j+1]);
            }
            r=Integer.parseInt(frase[frase.length-1]);
            game(p[0],0,32000);
            if(exp){
            for (int j = 0; j < s; j++) {
                pw.printf("%d",p[j]);
                if(j!=s-1)pw.printf("%s",signos[j]);
                else pw.printf("=%d\n",r);
            }
            }else{
                pw.printf("NO EXPRESSION\n");
            }
        }
        pw.close();
    }
    public static void game(int s,int indx,int viable){
        if(!exp && !noviable[indx][viable]){
            noviable[indx][viable]=true;
            if(s==r && p.length-1==indx){
                exp=true;
            }else if(indx+1<p.length){
             if(!exp && s+p[indx+1]>=-32000 && s+p[indx+1]<=32000){
                 int next=s+p[indx+1]+32000;
                 signos[indx]="+";
                 game(s+p[indx+1],indx+1,next);
             }
             if(!exp && s-p[indx+1]>=-32000 && s-p[indx+1]<=32000){
                 int next=s-p[indx+1]+32000;
                 signos[indx]="-";
                 game(s-p[indx+1],indx+1,next);
             }
             if(!exp && s*p[indx+1]>=-32000 && s*p[indx+1]<=32000){
                 int next=s*p[indx+1]+32000;
                 signos[indx]="*";
                 game(s*p[indx+1],indx+1,next);
             }
             if(!exp && p[indx+1]!=0 &&s%p[indx+1]==0 && s/p[indx+1]>=-32000 && s/p[indx+1]<=32000){
                 int next=s/p[indx+1]+32000;
                 signos[indx]="/";
                 game(s/p[indx+1],indx+1,next);
             }
            }
        }
    }
}
