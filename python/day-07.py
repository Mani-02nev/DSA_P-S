arr=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
# Rotate the array to the right by posi positions
print(f"Original array: {arr}")
k=int(input("Enter the number of positions to rotate: "))
k = k % len(arr)
arr=arr[-k:]+arr[:-k]
print(f"Array after rotating to the right by {k} positions: {arr}")