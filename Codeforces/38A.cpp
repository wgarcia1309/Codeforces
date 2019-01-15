//A. Army
//http://codeforces.com/problemset/problem/38/A
#include<stdio.h>
int main(){
    int n,d[102],a,b;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++)scanf("%d",&d[i]);
    scanf("%d %d",&a,&b);
    a--;
    b--;
    int s=0;
    for(int i=a;i<b;i++)s+=d[i];
    printf("%d",s);
    return 0;
}
