//1040 - Average 3

#include<iostream>
#include<iomanip>
using namespace std;
int main (){
double a,b,c,d,e;
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cout<<"Media: "<<fixed<<setprecision(1)<<(a*2+b*3+c*4+d)/10<<"\n";
if((a*2+b*3+c*4+d)/10>=7.0){
    cout<<"Aluno aprovado.\n";
}else if((a*2+b*3+c*4+d)/10<5.0){
    cout<<"Aluno reprovado.\n";
}else{
    cout<<"Aluno em exame.\n";
    cin>>e;
    cout<<"Nota do exame: "<<fixed<<setprecision(1)<<e<<"\n";
     e+=((a*2+b*3+c*4+d)/10);
    if(e/2.0>5.0)
        cout<<"Aluno aprovado.\n";
    else
        cout<<"Aluno reprovado.\n";
cout<<"Media final: "<<fixed<<setprecision(1)<<e/2<<"\n";
}
return 0;
}
