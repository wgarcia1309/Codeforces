//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1047
#include<iostream>
using namespace std;
int main (){
int h1,h2,m1,m2,m,h;
cin>>h1;
cin>>m1;
cin>>h2;
cin>>m2;
h=((h2-h1)+24)%24;
m=m2-m1;
if(m<0){
    m+=60;
    h--;
    }
if(h1==h2 && m2<m1)
    h=23;
else if(h1==h2 && m2==m1)
    h=24;
 cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;
return 0;
}
