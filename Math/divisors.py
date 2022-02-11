def calculate_divisors(n):
    divisors = []
    
    for i in range(1, n + 1):
        if i * i > n:
            break

        if n % i != 0:
            continue

        divisors.append(i)
        if n / i != i:
            divisors.append(n // i)
    
    divisors.sort()
    return divisors