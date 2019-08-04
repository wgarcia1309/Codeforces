//12015 Google is Feeling Lucky


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public  class Main {
    static int points[]= new int[10];
    static String wp[]= new String[10];

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(br.readLine());
        
        for (int i=0;i<n;i++) {
            int maxpoint=-1;
            for (int j=0;j<10;j++) {
                String datain=br.readLine();
                wp[j]=datain.split(" ")[0];
                points[j]=Integer.parseInt(datain.split(" ")[1]);
                if(maxpoint<points[j])maxpoint=points[j];
            }
            System.out.println("Case #"+(i+1)+":");
            System.out.print(select(maxpoint));
        }
    }
    public static String select(int point){
        String ans="";
        for (int j=0;j<10;j++) {
            if(point==points[j]){
                ans+=wp[j]+'\n';
            }
        }
        return ans;
    }
}
