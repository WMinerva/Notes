n = int(input())
# sin usar funciones math
sq = 1
while sq * sq < n:
    sq = sq + 1
print(sq) if sq * sq == n else print(sq - 1)
