//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1045
#include<iostream>
using namespace std;
int main (){
double t[3],a,b,c;
for (int i=0;i<3;i++)
    cin>>t[i];
a=t[0];
c=t[0];
for (int i=0;i<3;i++){
 if(t[i]>a)
    a=t[i];
 if(t[i]<c)
    c=t[i];
}
b=t[0];
for (int i=0;i<3;i++){
 if(t[i]>c &&t[i]<a)
    b=t[i];
}
if(a>=b+c){
    cout<<"NAO FORMA TRIANGULO\n";
}else{
    if((a*a)==(b*b)+(c*c))
        cout<<"TRIANGULO RETANGULO\n";
    else if((a*a)>(b*b)+(c*c))
        cout<<"TRIANGULO OBTUSANGULO\n";
    else if((a*a)<(b*b)+(c*c))
        cout<<"TRIANGULO ACUTANGULO\n";
    if(a==b && b==c)
        cout<<"TRIANGULO EQUILATERO\n";
    else if ((a==b && b!=c) || (b==c && a!=b) || (a==c && a!=b))
        cout<<"TRIANGULO ISOSCELES\n";
}
return 0;
}
