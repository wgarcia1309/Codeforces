//1149 - Summing Consecutive Integers

#include<iostream>
using namespace std;
int main(){
    int a,n;
        cin>>a;
        cin>>n;
        while(n<=0)
            cin>>n;
        int s=0;
        for(int i=a;i<a+n;i++){
                s+=i;
        }
        cout<<s<<endl;
    return 0;
}
