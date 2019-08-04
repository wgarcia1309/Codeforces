//77A - Heroes

#include <bits/stdc++.h>
using namespace std;
bool l[7][7];
  int r[3];
int id(char s[]){
  if(strcmp(s,"Anka")==0)return 0;
  else if(strcmp(s,"Chapay")==0)return 1;
  else if(strcmp(s,"Cleo")==0)return 2;
  else if(strcmp(s,"Troll")==0)return 3;
  else if(strcmp(s,"Dracul")==0)return 4;
  else if(strcmp(s,"Snowy")==0)return 5;
  else return 6;//Hexadecimal
}

int likes(int A,int B,int C){
  int n[7];
  for (int i = 0; i < 7; i++)n[i]=i;
  long sum=-1;
  do{
  long tmp=0;
  vector<int> groups[3];
  for(int i=0; i<A ;i++)groups[0].push_back(n[i]);
  for(int i=A; i<A+B ;i++)groups[1].push_back(n[i]);
  for(int i=A+B;i<A+B+C ;i++)groups[2].push_back(n[i]);
  for(int i=0;i<3;i++){//3 groups
     for(int j=0;j<groups[i].size();j++){//for every member of group i
          int u=groups[i][j];             //i check if they are "linked"
            for(int k=0;k<groups[i].size();k++){  //for every (u,v) i check if u~v;
                int v=groups[i][k];
                if(l[u][v])tmp++;
                }
            }
  }
  if(tmp>sum)sum=tmp;
} while (next_permutation(n,n+7));
    return sum;
}
int main (){
for (int i = 0; i < 7; i++){
  for (int j = 0; j < 7; j++){
    l[i][j]=false;
  }
}
int t;
long long a,b,c,d=0;
cin>>t;
for (int i = 0; i < t; i++){
  char n1[]={' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' '};
  char n2[]={' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' '};
  scanf("%s likes %s",n1,n2);
  l[id(n1)][id(n2)]=true;
}
  cin>>a>>b>>c;
  int lik=-1;
  d=a+b+c;
  for(int i=1;i<6;i++){
     for(int j=1;j<6;j++){
       for(int k=1;k<6;k++){
         if(i+j+k==7){//if the 7 members join to the battle I calculate
           long me=a/i,di=b/j,bal=c/k;//exp by monster
           long mx=max(me, max(di,bal) );//max xp
           long mn=min(me, min(di,bal) );//min xp
           if(mx-mn<d){//if the diference is bigger i change it
            r[0]=i;r[1]=j;r[2]=k;//heroes by team
            sort(r,r+3);
            int tmp=likes(r[0],r[1],r[2]);
            lik=tmp;
            d=mx-mn;
         }else if(mx-mn==d){
            r[0]=i;r[1]=j;r[2]=k;//heroes by team
            sort(r,r+3);
            int tmp=likes(r[0],r[1],r[2]);
            if(tmp>lik)lik=tmp;
         }
       }
     }
  }
}
cout<<d<<" "<<lik<<"\n";
}
