//11356 - Dates
//https://uva.onlinejudge.org/external/113/11356.pdf
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Calendar;
import java.util.GregorianCalendar;
public class Main {

    public static void main(String[] args) throws IOException {
      BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
      int n;
      n = Integer.parseInt(in.readLine());
      String meses[] = {"January", "February", "March", "April", "May", "June", "July", "August",
          "September", "October", "November", "December"};
      for (int i = 1; i <= n; i++) {
          String s;
          int fecha[]= new int[3];
          s = in.readLine();
          fecha[0]=Integer.parseInt(s.split("-")[0]);
          fecha[2]=Integer.parseInt(s.split("-")[2]);
          s=s.split("-")[1];
          for (int j = 0; j < 12; j++) {
              if (s.equals(meses[j])) {
                  fecha[1] = j;
                  break;
              }
          }
          int day = Integer.parseInt(in.readLine());
            Calendar gc = new GregorianCalendar(fecha[0], fecha[1], fecha[2]);
            gc.add(Calendar.DAY_OF_MONTH, day);
            day=gc.get(Calendar.DAY_OF_MONTH);
            if(day<10){
                System.out.println("Case "+i+": "+ gc.get(Calendar.YEAR)+"-"+meses[gc.get(Calendar.MONTH)]+"-0"+day);
            }else{
                System.out.println("Case "+i+": "+ gc.get(Calendar.YEAR)+"-"+meses[gc.get(Calendar.MONTH)]+"-"+day);
            }
      }
    }

}
