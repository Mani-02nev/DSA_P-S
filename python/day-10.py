# Container With Most Water
#Explanation: The maximum water is formed between heights 8 and 7. Width = 7 (distance between indices) Height = min(8,7) = 7 Area = 7 × 7 = 49
arr=[1,8,6,2,5,4,8,3,7,2]
print(f"Original array: {arr}")
left=0
right=len(arr)-1
max_area=0
while left<right:
     width=right-left
     height=min(arr[left],arr[right])
     area=width*height
     max_area=max(max_area,area)
     if arr[left]<arr[right]:
          left+=1
     else:
          right-=1
print(f"Maximum area of water that can be contained: {max_area}")