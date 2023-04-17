
k = 10000000000
def bigpow(a,b,c=1e10):
    res = 1
    a%=c
    while(b>0):
        if(b&1):
            res = res *a%c
        a = a*a%c
        b>>=1
    return res
n = 28433
p = 7830457
n%=k
p = bigpow(2,p)
res = n*p
res%=k
res+=1
res%=k
print(res)
