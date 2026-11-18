# k price ; n money ; w bananas
k, n, w = map(int, input().split())
s = 0

for i in range(1, w + 1):
    s = i * k + s

print(s - n)
