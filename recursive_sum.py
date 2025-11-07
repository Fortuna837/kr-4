def array_sum(arr, index=0):
    if index == len(arr):
        return 0
    return arr[index] + array_sum(arr, index + 1)

arr = [1, 2, 3, 4, 5]
print(f"Сумма массива {arr} = {array_sum(arr)}")
