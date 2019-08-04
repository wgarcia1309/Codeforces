//373A - Collecting Beats is Fun

#include<stdio.h>
int main(){
    int k,n[9],m[4][4];
    char msg[5];
    scanf("%d",&k);
    for(int i=0;i<9;i++)n[i]=0;
    for(int i=0;i<4;i++){
            scanf("%s",msg);
            for(int j=0;j<4;j++){
                    if(msg[j]!='.')n[(int)msg[j]-49]++;
            }
    }
    bool x=true;
    for(int i=0;i<9 &&  x;i++){
        if(n[i]>2*k)x=false;
    }
    (x)?printf("YES"):printf("NO");
    return 0;
}
