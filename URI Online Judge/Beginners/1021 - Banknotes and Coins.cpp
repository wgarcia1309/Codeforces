//1021 - Banknotes and Coins

#include<iostream>
using namespace std;
int main(){
    double m;
    int a,r;
    cin>>m;
    a=m;
    cout<<"NOTAS:\n";
    cout<<a/100<<" nota(s) de R$ 100.00\n";
    a=a-a/100*100;
    cout<<a/50<<" nota(s) de R$ 50.00\n";
    a=a-a/50*50;
    cout<<a/20<<" nota(s) de R$ 20.00\n";
    a=a-a/20*20;
    cout<<a/10<<" nota(s) de R$ 10.00\n";
    a=a-a/10*10;
    cout<<a/5<<" nota(s) de R$ 5.00\n";
    a=a-a/5*5;
    cout<<a/2<<" nota(s) de R$ 2.00\n";
    r=a%2;
    a=m;
    a=(m-a)*100;
    a=a+(r*100);
    cout<<"MOEDAS:\n";
    cout<<a/100<<" moeda(s) de R$ 1.00\n";
    a=a-a/100*100;
    cout<<a/50<<" moeda(s) de R$ 0.50\n";
    a=a-a/50*50;
    cout<<a/25<<" moeda(s) de R$ 0.25\n";
    a=a-a/25*25;
    cout<<a/10<<" moeda(s) de R$ 0.10\n";
    a=a-a/10*10;
    cout<<a/5<<" moeda(s) de R$ 0.05\n";
    a=a-a/5*5;
    cout<<a/1*1<<" moeda(s) de R$ 0.01\n";
return 0;
}
