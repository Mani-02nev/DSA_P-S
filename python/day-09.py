# move all 0 to end of the array
arr=[13,0,1,0,7,12,75,47,8,0,9,10,11,0,14,15]
print(f"Original array: {arr}")
j=0
target=int(input("Enter the target value to Last of a : "))
for i in range(len(arr)):
     if arr[i]!=target:
          arr[j]=arr[i]
          j+=1 
for i in range(j,len(arr)):
     arr[i]=target
print(f"Array after moving all {target} to the end: {arr}")