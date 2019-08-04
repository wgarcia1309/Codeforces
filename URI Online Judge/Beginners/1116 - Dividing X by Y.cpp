//1116 - Dividing X by Y

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    for (int i = 0; i < a; i++) {
      cin>>b;
      cin>>c;
      if(c==0)
          cout<<"divisao impossivel"<<endl;
      else
          cout<<setprecision(1)<<fixed<<b/double(c)<<endl;
    }
    return 0;
}
