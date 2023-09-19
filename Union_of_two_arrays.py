n , m = [int(x) for x in input().split()]
array1 = [int(i) for i in input().split()]
array2 = [int(j) for j in input().split()]
ans = set()
for ele1 in range(len(array1)):
    ans.add(array1[ele1])
for ele2 in range(len(array2)):
    ans.add(array2[ele2])
print(ans)

print(len(ans))