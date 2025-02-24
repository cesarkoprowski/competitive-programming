s = input()
 
vowels = "aoyeui"
result = ""
 
for char in s:
    if char.lower() not in vowels:
        result += "." + char.lower()
 
print(result)