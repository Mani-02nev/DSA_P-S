arr=[700, 4, 6, 2, 3, 35, 5, 8, 9, 10,60,89,53,23,45]
# Find the maximum value in the array and segond maximum value in the array
max1=arr[0]
max2=float('-inf')
j=1
for i in arr:
     if i>max1:
          max2=max1
          max1=i
     elif i > max2 and i != max1:
        max2 = i

print(f"Maximum value in the array is :{max1}")
print(f"Second Maximum value in the array is :{max2}")
