//524 - Prime Ring Problem

#include<bits/stdc++.h>
using namespace std;
int sol[20];
bool vistos[20];
int n;
bool primos[100];
void circle(int ind,int act){
    if(ind==n){
        if(primos[sol[1]+sol[ind]]){
            for(int i=1;i<n;i++)cout<<sol[i]<<" ";
            cout<<sol[n]<<"\n";
            }
    }else{
        for(int i=2;i<=n;i++){
            if(!vistos[i] && primos[act+i]){
                sol[ind+1]=i;
                vistos[i]=true;
                circle(ind+1,i);
                vistos[i]=false;
            }

        }
    }
}

int main(){

    memset(primos, true, sizeof(primos));
    primos[0]=false;
    primos[1]=false;
    for(int p=2;p*p<100;p++){
        if(primos[p]){
            for(int i=p*2;i<100;i=i+p){
                primos[i]=false;
            }
        }
    }
    int c=0;
    while(cin>>n){
     c++;
     memset(sol, 0, sizeof(sol));
     memset(vistos, false, sizeof(vistos));
     sol[1]=1;
     vistos[1]=true;
     if(c!=1)cout<<"\n";
     cout<<"Case "<<c<<":\n";
     circle(1,1);
    }
    return 0;
}
