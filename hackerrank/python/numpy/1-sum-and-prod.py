import numpy as np

n, m = map(int, input().split())

v = np.zeros((n, m))

for i in range(n):
    linha = list(map(int, input().split()))
    v[i, :] = linha  

vsum = np.sum(v, axis=0)
count = np.prod(vsum)

print(f"{count:.0f}")
