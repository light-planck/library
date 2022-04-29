from functools import lru_cache
@lru_cache
def comb(n, r):
    res = 1
    
    for i in range(r):
        res *= n - i
        res //= i + 1
    
    return res