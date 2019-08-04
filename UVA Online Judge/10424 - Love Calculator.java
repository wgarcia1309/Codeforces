// 10424 - Love Calculator


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        while(in.ready()){
            String n1=in.readLine(),n2=in.readLine();
            int  p1=points(nam2digi(n1)),p2=points(nam2digi(n2));
            double ratio=((p1>=p2)?1.0*p2/p1:1.0*p1/p2)*100;
            System.out.printf("%.2f %c\n",ratio,'%');
        }
    }
    public static int nam2digi(String name){
        name=name.toUpperCase();
        int number=0;
        for (int i=0;i<name.length();i++) {
            int letter=(int)(name.charAt(i));
            if(isAZ(letter)){
                number+=letter-64;
            }
        }
        return number;   
    }
    public static boolean isAZ(int n){
        return (n>=65 && n<=90);
    }
    public static int points (int number){
        if(number<10){
            return number;
        }else{
            int temp=0;
            while(number/10!=0){
                temp+=number/10;
                number=number%10;
            }
            temp+=number;
            return points(temp);
        }
    }
    
    }
