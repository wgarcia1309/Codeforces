//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1179
#include<iostream>
using namespace std;
int main(){
  int n,p=0,i=0,pr[5],ip[5];
  for (int j = 0; j <15; j++){
      cin>>n;
      if(n%2==0){
        pr[p]=n;
        p++;
      }else{
        ip[i]=n;
        i++;
      }
      if (p==5){
        for (int k = 0; k <5; k++)
          cout<<"par["<<k<<"] = "<<pr[k]<<endl;
        p=0;
      }
      if(i==5){
        for (int k = 0; k <5; k++)
          cout<<"impar["<<k<<"] = "<<ip[k]<<endl;
    i=0;
      }
    }
    if(i>0 && i<5){
      for (int k = 0; k <i; k++)
        cout<<"impar["<<k<<"] = "<<ip[k]<<endl;
    }
    if(p>0 && p<5){
      for (int k = 0; k <p; k++)
      cout<<"par["<<k<<"] = "<<pr[k]<<endl;
    }
  return 0;
}
