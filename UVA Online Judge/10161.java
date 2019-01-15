//10161 - Ant on a Chessboard
//https://uva.onlinejudge.org/external/101/10161.pdf
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static long n;
    public static void test(){
        double i=Math.sqrt(n);
        if(i-(int)i != 0){
            i=(int)(i+1);
        }
        double pos=n-((i-1)*(i-1));
        double espacio =i*i-((i-1)*(i-1));
        double fila=0,col=0;
        if(i%2!=0){

        if(pos< (espacio-1)/2){
              fila=pos;
              col=i;
        }else if(pos> (espacio-1)/2){
            fila=i;
            col=espacio-pos+1;
        }else{
            fila=i-1;
            col=espacio-pos;
        }
        }else{
            if(pos> (espacio-1)/2){
                col=i;
                fila=espacio-pos+1;
            }else{
                col=pos;
                fila=i;
            }
        }
        System.out.println((int)(col)+" "+(int)(fila));
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine());
        while (n != 0) {
            test();
            n = Integer.parseInt(br.readLine());
        }
    }
}
