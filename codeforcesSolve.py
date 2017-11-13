N,X= map(int,raw_input().split())
Arr = map(int,raw_input().split())
Count = 200005*[0]
sumXOR = 0
for i in Arr:
    P = i^X
    sumXOR = sumXOR + Count[P]
    Count[i]+=1
print sumXOR
