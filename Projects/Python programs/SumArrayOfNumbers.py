# PRINT AND SUM THE ARRAY OF NUMBERS
sum_arr = 0
arr = []
n = int(input('Number of elements in the array: '))
for i in range(0, n):
    l = int(input())
    arr.append(l)
    sum_arr += l

print("The sum is:", sum_arr)
