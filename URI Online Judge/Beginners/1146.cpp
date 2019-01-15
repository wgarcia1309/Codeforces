//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1146
#include<iostream>
using namespace std;
int main(){
    int n;
     do{
        cin>>n;
        for(int i=1;i<=n;i++){
            if(i==n)cout<<i<<endl;
            else cout<<i<<" ";
        }
      }while(n!=0);
    return 0;
}
