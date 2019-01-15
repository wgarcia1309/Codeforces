//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1134
#include<iostream>
using namespace std;
int main(){
    int a,b=0,c=0,d=0;
    cin>>a;
    while(a!=4){
      switch (a) {
        case 1:
        b++;
        break;
        case 2:
        c++;
        break;
        case 3:
        d++;
        break;
      }
      cin>>a;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<b<<endl;
    cout<<"Gasolina: "<<c<<endl;
    cout<<"Diesel: "<<d<<endl;
    return 0;
}
