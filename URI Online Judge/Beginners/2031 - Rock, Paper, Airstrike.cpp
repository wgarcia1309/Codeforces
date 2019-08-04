//2031 - Rock, Paper, Airstrike

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for (int i = 0; i < n; i++) {
    string a,b;
    cin>>a;
    cin>>b;
    if(a.compare("ataque")==0){
        if(b.compare("ataque")==0)cout<<"Aniquilacao mutua"<<endl;
        else if (b.compare("pedra")==0)cout<<"Jogador 1 venceu"<<endl;
        else cout<<"Jogador 1 venceu"<<endl;
    }else if (a.compare("pedra")==0){
        if(b.compare("ataque")==0)cout<<"Jogador 2 venceu"<<endl;
        else if (b.compare("pedra")==0)cout<<"Sem ganhador"<<endl;
        else cout<<"Jogador 1 venceu"<<endl;
    }else{
        if(b.compare("ataque")==0)cout<<"Jogador 2 venceu"<<endl;
        else if (b.compare("pedra")==0)cout<<"Jogador 2 venceu"<<endl;
        else cout<<"Ambos venceram"<<endl;
    }
  }
  return 0;
}
