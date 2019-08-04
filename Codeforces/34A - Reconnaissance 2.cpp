//34A - Reconnaissance 2

#include<iostream>
#include<cmath>
using namespace std;
int main(){
        int n,s[100];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int n1=-1,n2=-1,val=1001,x;
        for(int i=0;i<n;i++){
            if(i<=n-1){
                    if(n-1!=i){
                        x=abs(s[i]-s[i+1]);
                        if(x<val){
                            val=x;
                            n1=i;
                            n2=i+1;
                        }
                    }else{
                        x=abs(s[i]-s[0]);
                        if(x<val){
                            val=x;
                            n1=i;
                            n2=0;
                        }
                    }
            }
            if(i>=0){
                    if(i==0){
                            x=abs(s[0]-s[n-1]);
                        if(x<val){
                            val=x;
                            n1=0;
                            n2=n-1;
                        }
                    }else{
                        x=abs(s[i-1]-s[i]);
                        if(x<val){
                            val=x;
                            n1=i-1;
                            n2=i;
                        }
                    }

            }
        }
        cout<<n1+1<<" "<<n2+1<<endl;
        return 0;
}
