import math

def calculate_divisors(n):
    divisors = []
    
    for i in range(1, int(math.sqrt(n)) + 1):
        if n % i != 0:
            continue

        divisors.append(i)
        if n / i != i:
            divisors.append(n // i)
    
    divisors.sort()
    return divisors