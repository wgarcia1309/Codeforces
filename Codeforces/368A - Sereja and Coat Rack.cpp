//368A - Sereja and Coat Rack

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
        int n,d,p[100],m;
        int indx;
        cin>>n>>d;
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        cin>>m;
        sort(p,p+n);
        if(m>=n)indx=n;
        else indx=m;
        int money=0;
        for(int i=0;i<indx;i++){
            money+=p[i];
        }
        if(m-n>0)money-=(m-n)*d;
        cout<<money<<endl;
        return 0;
}
