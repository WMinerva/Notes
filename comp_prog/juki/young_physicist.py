n = int(input())
sx, sy, sz = 0, 0, 0
for i in range(n):
    x, y, z = map(int, input().split())
    sx = sx + x
    sy = sy + y
    sz = sz + z
print("YES") if sx == sy == sz == 0 else print("NO")
