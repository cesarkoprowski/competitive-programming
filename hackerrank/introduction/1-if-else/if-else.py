n = int(input())
if n % 2 != 0: 
    print("Weird")
else:
    if 2 <= n <= 5 or n > 20:
        print("Not Weird")
    elif 6 <= n <= 20:
        print("Weird")