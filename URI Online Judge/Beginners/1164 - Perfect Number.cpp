//1164 - Perfect Number

#include<iostream>
using namespace std;
int main(){
    int n;
  cin>>n;
  for (int i = 0; i < n; i++) {
    int a;
        cin>>a;
        int s=0;
        for (int i = 1; i<a; i++) {
            if (a%i==0)s+=i;
        }
        if(s==a)cout<<a<<" eh perfeito"<<endl;
        else cout<<a<<" nao eh perfeito"<<endl;
  }
 return 0;
}
