import numpy as np

n, m = map(int, input().split())

v = np.zeros((n, m))

for i in range(n):
    linha = list(map(int, input().split()))
    v[i, :] = linha  

print(np.mean(v, axis=1)) 
print(np.var(v, axis=0))  
result = np.std(v, axis=None)
if result != 0:
    print(f"{result:.11f}") 
else:
    print(f"{result:.1f}") 