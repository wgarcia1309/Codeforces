//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1080
#include<iostream>
using namespace std;
int main (){
int n,nm,p;
cin>>nm;
p=1;
for(int i=2;i<=100;i++){
        cin>>n;
        if (nm<n) {
          nm=n;
          p=i;
        }
}
cout<<nm<<"\n"<<p<<"\n";
return 0;
}
