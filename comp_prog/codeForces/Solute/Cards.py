num = int(input())
word = input()
c_n= 0
c_z=0
for char in word:
    if char == "z":
        c_z+=1
    elif char == "n":
        c_n+=1

result = [1] * c_n + [0] * c_z
print(" ".join(map(str, result)))
# print(c_n,c_z)
