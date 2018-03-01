search_element=int(input())
array=[int(x) for x in input().split()]
index=-1
for i in range(len(array)):
    if search_element==array[i]:
        index=i
        break
print(index)
