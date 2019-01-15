//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1066
#include<iostream>
using namespace std;
int main (){
    int p=0,ip=0,ps=0,ng=0;
    for(int i=1;i<6;i++){
            int a;
            cin>>a;
            if(a%2==0)
                p++;
            else
                ip++;
            if(a>0)
                ps++;
            else if (a<0)
                ng++;

    }
cout<<p<<" valor(es) par(es)"<<endl;
cout<<ip<<" valor(es) impar(es)"<<endl;
cout<<ps<<" valor(es) positivo(s)"<<endl;
cout<<ng<<" valor(es) negativo(s)"<<endl;
}
