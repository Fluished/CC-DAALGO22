def find_max(arr):
    max_num = arr[0]
    for num in arr:
        if num > max_num:
            max_num = num
    return max_num

array = []
n = int(input("Enter the number of elements: "))

for i in range(n):
    element = int(input("Enter element: "))
    array.append(element)
    
print("Maximum element is: ",find_max(array))