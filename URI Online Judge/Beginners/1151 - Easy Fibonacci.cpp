//1151 - Easy Fibonacci

#include<iostream>
using namespace std;
int main(){
    int n,a=0,s=1;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i==0 || i==1){
            cout<<i;
        }else{
            cout<<a+s;
            int t;
            t=(a+s);
            a=s;
            s=t;
        }
        if(i!=n-1)cout<<" ";
        else cout<<endl;
    }
    return 0;
}
