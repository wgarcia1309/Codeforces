//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1114
#include<iostream>
using namespace std;
int main(){
    int a;
     do{
        cin>>a;
        if(a!=2002)cout<<"Senha Invalida"<<endl;
      }while(a!=2002);
      cout<<"Acesso Permitido"<<endl;
    return 0;
}
