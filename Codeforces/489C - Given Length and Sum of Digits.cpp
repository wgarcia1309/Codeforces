//489C - Given Length and Sum of Digits

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include<iostream>
using namespace std;
int main (){
   	int a,b,aux,n;
    scanf("%d",&a);
    scanf("%d",&b);
    if(b>a*9 || (a!=1 &&b==0)){
        printf("-1 -1");
    }else{
    aux=b-1;
    n=a-1;
    int v[a];
    v[0]=1;
    while(n>0){
        if(aux>9){
        aux-=9;
        v[n]=9;
        }else{
            if(aux!=0){
                v[n]=aux;
                aux=aux-aux;
            }else
                v[n]=0;
        }
        n--;
    }
    v[0]+=aux;
    for(int i=n;i>=1;i--)
            v[n]=0;
    for(int i=0;i<a;i++)
        printf("%d",v[i]);
    printf(" ");
    aux=b;
    n=0;
        while(n<a){
            if(aux>9){
            aux-=9;
            printf("9");
            }else{
                printf("%d",aux);
                n++;
            for(int i=n;i<a;i++)
               printf("0");
            n=a;
            }
            n++;
        }
    }
    return 0;
}
