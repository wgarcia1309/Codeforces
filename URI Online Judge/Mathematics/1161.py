#https://www.urionlinejudge.com.br/judge/en/problems/view/1161
while(True):
    try:
        s=str(input())
        n=s.split(" ")
        v1=int(n[0])
        v2=int(n[1])
        if(v1>v2):
            mx=v1+1
        else:
            mx=v2+1
        r1=r2=p=1;
        for x in range (2,mx):
            p*=x;
            if(x==v1):
                r1=p;
            if(x==v2):
                r2=p;
        print(r1+r2)
    except  Exception:
        break
