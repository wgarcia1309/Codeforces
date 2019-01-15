//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1153
#include<iostream>
using namespace std;
int main(){
    int n,p=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        p*=i;
    }
    cout<<p<<endl;
    return 0;
}
