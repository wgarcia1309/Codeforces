//A. Worms Evolution
//http://codeforces.com/contest/31/problem/A
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int w[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>w[i];
    }
    bool x=true;
    for(int i=0;i<n && x;i++){
        for(int j=0;j<n && x;j++){
            if(i!=j){
                for(int k=0;k<n && x;k++){
                        if(k!=j && k!=i && w[i]==w[j]+w[k]){
                            cout<<i+1<<" "<<j+1<<" "<<k+1<<"\n";
                            x=false;
                        }
                }
            }
        }
    }
    if(x){
        cout<<"-1\n";
    }
}
