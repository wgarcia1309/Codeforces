//330A - Cakeminator

#include<iostream>
using namespace std;
int main (){
int a,b,c,i,j,cf=0,cc=0,sw;
char A[100][100];
cin>>a;
cin>>b;
for( i=0;i<a;i++){
        for( j=0;j<b;j++){
        cin>>A[i][j];
        }
}
for( i=0;i<a;i++){
        sw=0;
        for( j=0;j<b;j++){
            if(A[i][j]=='s' || A[i][j]=='S' ){
            sw=sw + 1;
            }
        }
         if(sw==0){
         cf=cf+1;
          }
}
cf=a-cf;
for( j=0;j<b;j++){
        sw=0;
        for( i=0;i<a;i++){
           if(A[i][j]=='s' || A[i][j]=='S' ){
            sw=sw + 1;
                }
            }
            if(sw==0){
            cc=cc+1;
            }
}
cc=b-cc;
if(cf==a && cc==b){
    cout<<0<<endl;
    }else{
        if(cf!=0 && cc!=0){
        cout<<(a*b)-(cf*cc)<<endl;
        }else{
        cout<<(a*b)<<endl;
        }
}
return 0;
}
