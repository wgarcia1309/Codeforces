//131A - cAPS lOCK

#include <bits/stdc++.h>
using namespace std;
int main(){
    char c[110],r[110];
    memset(c,' ',109);
    memset(r,' ',109);
    scanf("%s",c);
    int id=(int)c[0];
    bool x=true;
    if(id>=97 && id<=122)r[0]=(char)id-32;
    else r[0]=(char)id+32;
      for(int i=1;x;i++){
        if((int)c[i]==0 ||c[i]==' ' || c[i]=='\n'){
          r[i]=' ';
          break;
        }else{
          if(c[i]>=65 && c[i]<=90)r[i]=(char)c[i]+32;
          else
            x=false;
        }
      }
          if(x)printf("%s",r);
          else printf("%s",c);
    return 0;
}
