import numpy as np

n, m = map(int, input().split())

my_array = np.zeros((n, m))

for i in range(n):
    linha = list(map(int, input().split()))
    my_array[i, :] = linha  

my_array_sum = np.sum(my_array, axis=0)
count = np.prod(my_array_sum, axis=None)

print(f"{count:.0f}")
