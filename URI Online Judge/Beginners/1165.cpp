//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1165
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
            if (a%i==0)s++;
        }
        if(s>0)cout<<a<<" eh primo"<<endl;
        else cout<<a<<" eh primo"<<endl;
  }
 return 0;
}
