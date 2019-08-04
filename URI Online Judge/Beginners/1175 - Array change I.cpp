//1175 - Array change I

#include<iostream>
using namespace std;
int main(){
  int N[20];
    for (int i = 0; i <20 ;i++)
        cin>>N[i];
    for (int i = 0; i <10 ;i++){
        int t=N[i];
        N[i]=N[20-i-1];
        N[20-i-1]=t;
    }
    for (int i = 0; i <20 ;i++)
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
  return 0;
}
