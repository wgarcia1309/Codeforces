//11462 - Age Sort
//https://uva.onlinejudge.org/external/114/11462.pdf
//package test;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;

public class Main {//Main para uva

    public static LinkedList<Integer> list[];
    public static boolean visto[];

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(br.readLine());
        while(n!=0){
            int v[]= new int[n];
            String p[]= br.readLine().split(" ");
                for (int i = 0; i < n; i++)
                    v[i]=Integer.parseInt(p[i]);
                sortM(v,0,n-1);
                for (int i = 0; i < n-1; i++)
                    System.out.print(v[i]+" ");
                System.out.println(v[n-1]);
            n=Integer.parseInt(br.readLine());
        }
    }
     public static void sortM(int arr[], int l, int r){
        if (l < r){
            int m = (l+r)/2;
            sortM(arr, l, m);
            sortM(arr , m+1, r);
            merge(arr, l, m, r);
        }
    }
    public static void merge(int[] arr, int l, int m, int r){
        int n1 = m - l + 1;
        int n2 = r - m;
        int L[] = new int [n1];
        int R[] = new int [n2];
        for (int i=0; i<n1; ++i)
            L[i] = arr[l+i];
        for (int j=0; j<n2; ++j)
            R[j] = arr[m+1+j];
        int i = 0, j = 0;
        int k = l;
        while (i < n1 && j < n2){
            if (L[i] <= R[j]){
                arr[k] = L[i];
                i++;
            }else{
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        while (i < n1){
            arr[k] = L[i];
            i++;
            k++;
        }
          while (j < n2){
            arr[k] = R[j];
            j++;
            k++;
        }
    }
}
