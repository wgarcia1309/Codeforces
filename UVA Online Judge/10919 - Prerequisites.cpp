//10919 - Prerequisites?

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    int k,m;
    cin>>k;
    while(k!=0){
        cin>>m;
        int courses[110];
        for(int i=0;i<k;i++){
            cin>>courses[i];
        }
        bool graduated=true;
        for(int i=0;i<m;i++){
            int c,r,ccourse[100];
            cin>>c>>r;
            for(int j=0;j<c;j++){
                cin>>ccourse[j];
            }
            while(c!=0 && r>0 && graduated){
                int s=0;
                while(ccourse[c-1]!=courses[s] && s<k){
                    s++;
                }
                if( s!=k )r--;
                c--;
            }
            if(r>0)graduated=false;
        }
        (graduated)?cout<<"yes\n":cout<<"no\n";
        cin>>k;
    }
    return 0;
}
/*

3 2
0123 9876 2222
2 1 8888 2222
3 2 9876 2222 7654
3 2
0123 9876 2222
2 2 8888 2222
3 2 7654 9876 2222
0

 */