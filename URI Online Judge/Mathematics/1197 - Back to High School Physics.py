#1197 - Back to High School Physics

while(True):
    try:
        s=str(input())
        n=s.split(" ")
        v=int(n[0])
        t=int(n[1])
        print(v*t*2)
    except  Exception:
        break
