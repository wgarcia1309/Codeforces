#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int p[15],indx=0;
    p[0]=2;
        for(int i=3;i<50;i=i+2){
            bool n=true;
            for(int j=2;j<=sqrt(i) && n;j++){
                if(i%j==0)n=false;
            }
            if(n){
                indx++;
                p[indx]=i;
            }
        }
        int nu,m,i=indx;
        cin>>nu>>m;
        while(p[i]!=nu){
            i--;
        }
        if(p[i+1]==m)cout<<"YES\n";
        else cout<<"NO\n";
    return 0;
}
