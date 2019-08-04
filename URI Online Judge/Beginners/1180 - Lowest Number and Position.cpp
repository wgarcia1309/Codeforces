//1180 - Lowest Number and Position

#include<iostream>
using namespace std;
int main(){
  int mn=0,v[1000],n;
  cin>>n;
  for (int j = 0; j <n; j++){
      cin>>v[j];
      if (v[mn]>v[j]) mn=j;
 }
    cout<<"Menor valor: "<<v[mn]<<endl;
    cout<<"Posicao: "<<mn<<endl;
  return 0;
}
