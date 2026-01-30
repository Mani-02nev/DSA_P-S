arr=[1,1,2,2,3,4,4,5,5,5,6,7,7,8,9,9]
# Find the unique elements in the array
j=0
print(f"Original array is :{arr}")
for i in range(1,len(arr)):
     if arr[i]!=arr[j]:
          j+=1
          arr[j]=arr[i]

print(f"Unique elements in the array are : ",end="")
for i in range(j+1):
     print(arr[i],end=" ")
print(f"\nNumber of unique elements in the array is :{j+1}")
