//1094 - Experiments

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    int n,c=0,r=0,s=0;
    cin>>n;
    double p=0;
    for (int i = 1; i <= n; i++) {
      int a;
      string st;
      cin>>a;
      cin>>st;
      if(!st.compare("C")){
        c+=a;
      }else if(!st.compare("R")){
        r+=a;
      }else if(!st.compare("S")){
        s+=a;
      }
      p+=a;
    }
    cout<<"Total: "<<p<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cout<<"Percentual de coelhos: "<<setprecision(2)<<fixed<<c/p*100<<" %"<<endl;
    cout<<"Percentual de ratos: "<<setprecision(2)<<fixed<<r/p*100<<" %"<<endl;
    cout<<"Percentual de sapos: "<<setprecision(2)<<fixed<<s/p*100<<" %"<<endl;
    return 0;
}
