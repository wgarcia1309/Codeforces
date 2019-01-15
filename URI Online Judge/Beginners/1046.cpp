//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1046
#include<iostream>
using namespace std;
int main (){
int a,b;
cin>>a;
cin>>b;
if(a==b){
    cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
}else if(a>b){
    cout<<"O JOGO DUROU "<<24-(a-b)<<" HORA(S)"<<endl;
}else{
    cout<<"O JOGO DUROU "<<b-a<<" HORA(S)"<<endl;
}
return 0;
}
