my_array = [4, 2, 7, 1, 9, 5,8,10,3,6,0,]
print(f"Sorted Array: {my_array}")
reversed_array = []
def reverse_array(arr):
     for i in range(len(arr)-1, -1, -1):
          reversed_array.append(arr[i])
     return reversed_array
# Test the reverse_array function
print(f"Original Array: {my_array}")
reversed_result = reverse_array(my_array)
print(f"Reversed Array: {reversed_result}")

