//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1828
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
  for (int i = 0; i < n; i++) {
      string a,b;
      cin>>a>>b;
      if(a==b)cout<<"Caso #"<<i+1<<": De novo!"<<endl;
      else if((a == "tesoura" && b == "papel") || (a == "papel" && b == "pedra") || (a == "pedra" && b == "lagarto") || (a == "lagarto" && b == "Spock") || (a == "Spock" && b == "tesoura") || (a == "tesoura" && b == "lagarto") || (a== "lagarto" && b == "papel") ||(a == "papel" && b == "Spock") ||(a == "Spock" && b == "pedra") || (a == "pedra" && b == "tesoura"))
      cout<<"Caso #"<<i+1<<": Bazinga!\n";
  		else cout<<"Caso #"<<i+1<<": Raj trapaceou!\n";
  }
	return 0;
}
