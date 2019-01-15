#https://www.urionlinejudge.com.br/judge/en/problems/view/1197
while(True):
    try:
        s=str(input())
        n=s.split(" ")
        v=int(n[0])
        t=int(n[1])
        print(v*t*2)
    except  Exception:
        break
