import numpy as np

n, m = map(int, input().split())

v = np.zeros((n, m))

for i in range(n):
    linha = list(map(int, input().split()))
    v[i, :] = linha  

vmin = np.min(v, axis=1)
count = np.max(vmin)

print(f"{count:.0f}")
