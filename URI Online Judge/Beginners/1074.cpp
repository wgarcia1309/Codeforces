//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1074
#include<iostream>
using namespace std;
int main (){
int n,a;
cin>>n;
for(int i=1;i<=n;i++){
        cin>>a;
    if(a==0)
        cout<<"NULL"<<endl;
    else if(a%2==0 && a>0)
        cout<<"EVEN POSITIVE"<<endl;
    else if(a%2==0 && a<0)
        cout<<"EVEN NEGATIVE"<<endl;
    else if(a%2!=0 && a>0)
        cout<<"ODD POSITIVE"<<endl;
    else if(a%2!=0 && a<0)
        cout<<"ODD NEGATIVE"<<endl;
}
return 0;
}
