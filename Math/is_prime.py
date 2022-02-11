def is_prime(n):
    for i in range(2, n + 1):
        if i * i > n:
            break

        if n % i == 0:
            return False
    
    return True