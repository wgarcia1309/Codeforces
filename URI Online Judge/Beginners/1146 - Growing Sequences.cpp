//1146 - Growing Sequences

#include<iostream>
using namespace std;
int main(){
    int n;
     do{
        cin>>n;
        for(int i=1;i<=n;i++){
            if(i==n)cout<<i<<endl;
            else cout<<i<<" ";
        }
      }while(n!=0);
    return 0;
}
