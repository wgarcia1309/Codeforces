//545D - Queue

#include<stdio.h>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int que[100000],p=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&que[i]);
    sort(que,que+n);
    long long suma=0;
    for(int i=0;i<n;i++){
        if(suma<=que[i]){
                p++;
            suma+=que[i];
        }
    }
    printf("%d",p);
    return 0;
}
