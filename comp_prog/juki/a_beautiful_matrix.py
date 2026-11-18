n = 5
# m = [[0] for _ in range(n)]
# m = list(input())
x, y = 0, 0
w = [list(map(int, input().split())) for _ in range(n)]
# print(w[1][2])
for f in range(n):
    for c in range(n):
        if w[f][c] == 1:
            x = f
            y = c
            break
print(abs(2 - x) + abs(2 - y))

# print(*w)
