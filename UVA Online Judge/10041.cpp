//10041 - Vito’s family
//https://uva.onlinejudge.org/external/100/10041.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
    int r[500],n,t,sum,test;
    cin>>t;
    for(int k=0;k<t;k++){
    cin>>n;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        sum=15000000;
        for(int i=0;i<n;i++){
            test=0;
            for(int j=0;j<n;j++){
                if(i!=j)test+=abs(r[i]-r[j]);
            }
            if(test<sum)sum=test;
        }
        cout<<sum<<endl;
    }
}
