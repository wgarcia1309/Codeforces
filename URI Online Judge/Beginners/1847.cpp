//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1847
#include<iostream>
using namespace std;
int main(){
  int d1,d2,d3;
  cin>>d1;
  cin>>d2;
  cin>>d3;
  if(d1 > d2 && d2 <= d3) cout<<":)"<<endl;
  else if(d1 < d2 && d2 >= d3) cout<<":("<<endl;
  else if(d1 < d2 && d2 < d3 && (d3 - d2) < (d2 - d1)) cout<<":("<<endl;
  else if(d1 < d2 && d2 < d3 && (d3 - d2) >= (d2 - d1)) cout<<":)"<<endl;
  else if(d1 > d2 && d2 > d3 && (d3 - d2) > (d2 - d1)) cout<<":)"<<endl;
  else if(d1 > d2 && d2 > d3 && (d3 - d2) <= (d2 - d1)) cout<<":("<<endl;
  else if(d1 == d2 && d2 < d3) cout<<":)"<<endl;
  else cout<<":("<<endl;
  return 0;
}
