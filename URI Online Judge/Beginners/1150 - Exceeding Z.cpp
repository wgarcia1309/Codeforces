//1150 - Exceeding Z

#include<iostream>
using namespace std;
int main(){
    int a,n,c=1;
        cin>>a;
        cin>>n;
        while(a>=n)
            cin>>n;
        int s=a;
        while(s<=n){
            s+=a;
            a++;
            c++;
        }
        cout<<c<<endl;
    return 0;
}
