//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1075
#include<iostream>
using namespace std;
int main (){
int n;
cin>>n;
for(int i=1;i<=10000;i++){
    if(i%n==2)
        cout<<i<<"\n";
}
return 0;
}
