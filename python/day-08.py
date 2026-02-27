# Pair with Given Sum
arr=[1,2,3,4,5,6,7,8,9,10]
print(f"Original array: {arr}")
target=int(input("Enter the target value: "))
pairs=[]
for i in range(len(arr)):
     for j in range(i+1,len(arr)):
         if arr[i]+arr[j]==target:
              pairs.append((arr[i],arr[j]))
if pairs:
     print(f"Pairs with sum {target}: {pairs}")
else:
     print(f"No pairs found with sum {target}")
