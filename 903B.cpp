//B. The Modcrab
//http://codeforces.com/problemset/problem/903/B
#include<bits/stdc++.h>
using namespace std;
int main(){
int h1,h2,a1,a2,c,i=0;
bool r[10000];
scanf("%d %d %d",&h1,&a1,&c);
scanf("%d %d",&h2,&a2);
bool x=true;
while(x){
    if(a1>=h2){
        r[i]=true;
        h2-=a1;
        x=false;
    }else if(a2>=h1){
        r[i]=false;
        h1+=c;
    }else{
        r[i]=true;
        h2-=a1;
    }
    h1-=a2;
    i++;
}
printf("%d\n",i);
for(int k=0;k<i;k++)printf(r[k]?"STRIKE\n":"HEAL\n");
return 0;
}
