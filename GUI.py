n,q = map(int,input().split())
a = map(int,input().split())
for i in xrange(q):
    qur = map(int,input().split())
    if qur[0]==0 and a[qur[2]-1]==1:
        print('ODD')
    elif qur[0]==0 and a[qur[2]-1]==0:
        print('EVEN')
    else:
        a[qur[1]-1]=1
