#  Problem :  Given an array of size N, process each element exactly once.and found the lenght to array(list)
my_Array=[1,"Mani",18,20,'K',444] # python array is store to dfrent values not Homogeneous
my_Array2=[2,5,6,1,6,20,7,9,10,13,0,0.5,0.1,-1,-20] # Homogeneous Array
len=0
for elament in my_Array:
    print(f"Procesin the element :{elament}")
    len+=1
print(f"Lenth os the Array is:{len}")
# max of Array
max=my_Array2[0] # init to max is first elements
for item in my_Array2:
    if max< item:
        max=item
print(f"Max of Array is :{max}")
# min of the Array 
min=max
for item in my_Array2:
    if min > item:
        min=item
print(f"Min of Array is :{min}")
exit()