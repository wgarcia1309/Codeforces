//1160 - Population Increase

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for (int i = 0; i <n ;i++) {
    int p1,p2,j=1;
    double g1,g2;
        cin>>p1;
        cin>>p2;
        cin>>g1;
        cin>>g2;
        while(j<101){
        p1+=g1/100*p1;
        p2+=g2/100*p2;
          if(p1>p2)break;
          j++;
        }
        if(j>100)
        cout<<"Mais de 1 seculo."<<endl;
        else
        cout<<j<<" anos."<<endl;
  }
  return 0;
}
