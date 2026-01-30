
arr=[5, 3, 8, 6, 2, 7, 4, 1, 0, 9]
# Lener serch
f=False
target=int(input("Enter the target value: "))
for i in arr:
     if i==target:
          print(f"Target {target} found in the array")
          print(f"Index of the target {target} is :{arr.index(i)}")
          f=True
          break
if f==False:
          print(f"Target {target} not found in the array")

