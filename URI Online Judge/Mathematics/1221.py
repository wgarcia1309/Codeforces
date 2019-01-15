#https://www.urionlinejudge.com.br/judge/en/problems/view/1221
import math
n=int(input())
while(n>0):
    s=int(input())
    d=0
    if(s==2):
       print("Prime")
    else:
        v=True
        j = 3
        r=math.sqrt(s)
        while (j <=r and v):
            if (s%j==0):
                v=False;
            j+=2
        if(v==True):
            print("Prime")
        else:
            print("Not Prime")
    n-=1
