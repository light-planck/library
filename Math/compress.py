def compress(a):
    dict = {}
    b = sorted(set(a))

    for i, x in enumerate(b):
        dict[x] = i
    
    return dict

A = [8, 100, 33, 33, 33, 12, 6, 1211]
dict = compress(A)
for ai in A:
    print(dict[ai])