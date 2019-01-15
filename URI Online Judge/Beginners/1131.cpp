//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1119
#include<iostream>
using namespace std;
int main(){
    int a,b,c,i=0,g=0,e=0;
     do{
        cin>>a;
        cin>>b;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>c;
        if(a>b)
            i++;
        else if (b>a)
            g++;
        else
            e++;
      }while(c!=2);
      cout<<i+g+e<<" grenais"<<endl;
      cout<<"Inter:"<<i<<endl;
      cout<<"Gremio:"<<g<<endl;
      cout<<"Empates:"<<e<<endl;
      if(i>g)
      cout<<"Inter venceu mais"<<endl;
      else if(g>i)
      cout<<"Gremio venceu mais"<<endl;
      else
      cout<<"Não houve vencedor"<<endl;
    return 0;
}
