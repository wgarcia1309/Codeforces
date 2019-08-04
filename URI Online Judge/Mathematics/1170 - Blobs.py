#1170 - Blobs

n=int(input())
while(n>0):
    s=float(input())
    d=0;
    while(s>1):
        s=s/2
        d+=1
    print(d,"dias")
    n-=1
