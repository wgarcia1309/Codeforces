//11407 - Squares

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import static java.lang.Math.floor;
import static java.lang.Math.pow;
import static java.lang.Math.sqrt;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int respuesta[] = new int[10010];
        for (int i = 1; i <= 10000; i++) {
            if (Math.sqrt(i) % 1 == 0) {
                respuesta[i] = 1;
            } else {
                int pos = (int)floor(sqrt(i));
                int num = i-(int)(pow(pos,2));
                    respuesta[i]=99999;
                    int in=1,fin=i-1;
                while (true) {
                        if(respuesta[i]>respuesta[in]+respuesta[fin]){
                            respuesta[i]= respuesta[in]+respuesta[fin];
                        }else if(in==fin || fin<in){
                            if(in==fin && respuesta[i]>respuesta[in]*2) respuesta[i]= respuesta[in]*2;
                        break;
                        }
                        in++;
                        fin--;
                }
            }
        }
        int n = Integer.parseInt(br.readLine());
        for (int i = 0; i < n; i++) {
            int index = Integer.parseInt(br.readLine());
            System.out.println(respuesta[index]);
        }
    }
}
