//297 - Quadtrees

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 class qt{
 boolean x,dad;
 qt hijos[];
 public qt(){
     this.x=false;
     this.dad=false;
     hijos=new qt[4];
 }
}
public class Main {//Main para uva
    public static qt tree=null;
    public static int sum, ind ;
    public static String s;

    private static void pre(qt tree, int n) {
        if(tree!=null){
        if(tree.x){
            sum+=n;
        }else{
            for (int i = 0; i < 4; i++) {
                qt temp=tree.hijos[i];
                if(temp!=null){
                    if(temp.x){
                        sum+=n/4;
                    }else if(temp.dad){
                        pre(temp,n/4);
                    }
                }
            }
        }
        }
    }
    public static void cr(qt tree) {
        for (int i = 0; i < 4; i++) {
            ind++;
            if(s.length()>ind){
            if (s.charAt(ind) == 'f') {
                if(tree.hijos[i]==null)tree.hijos[i]=new qt();
                tree.hijos[i].x=true;
            } else if (s.charAt(ind) == 'p') {
                if(tree.hijos[i]==null)tree.hijos[i]=new qt();
                tree.hijos[i].dad=true;
                cr(tree.hijos[i]);
            }else{
                if(tree.hijos[i]==null)tree.hijos[i]=new qt();
            }
        }
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        for (int i = 0; i < n; i++) {
            sum = 0;
            tree=new qt();
            s = br.readLine();
                ind=0;
                if(s.charAt(0)=='f')tree.x=true;
                else cr(tree);
            s = br.readLine();
                ind=0;
                if(s.charAt(0)=='f' || tree.x)tree.x=true;
                else cr(tree);
            pre(tree,1024);
            System.out.println("There are " + sum + " black pixels.");
        }
    }

}
