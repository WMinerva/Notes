days = int(input())
travels = input()
sf = 0
fs = 0

for char in range(0, days - 1):
    if travels[char] == "F" and travels[char + 1] == "S":
        fs += 1
    elif travels[char] == "S" and travels[char + 1] == "F":
        sf += 1

print("YES" if sf > fs else "NO")
