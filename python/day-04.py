arr=[5, 3, 8, 6, 2, 7, 4, 1, 0, 9]
# find the Reverse of the array
reverse_arr=[]
k=-1
for i in arr:
     reverse_arr.append(arr[k])
     k-=1
print(f"Original  array  is  :{arr}")
print(f"Reverse of the array :{reverse_arr}")
