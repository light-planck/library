def combination(n, r):
    res = 1
    
    for i in range(r):
        res *= n - i
        res //= i + 1
    
    return res

print(combination(5, 2))