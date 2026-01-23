#---- Liner serch ----#
def liner_search(arr, target):
     for i in range(len(arr)):
          if arr[i] == target:
               return i
     return -1
# Test the liner_search function
my_array = [4, 2, 7, 1, 9, 5,8,10,3,6,0,]
print(f"Array: {my_array}")
target = int(input("Enter the element to search: "))
result = liner_search(my_array, target)
if result != -1:
     print(f"Element found at index: {result}")
else:
     print("Element not found in the array.")
