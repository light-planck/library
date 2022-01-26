class UnionFind:
    def __init__(self, n):
        self.parent = [-1] * n

    def find(self, x):
        if self.parent[x] < 0:
            return x
        else:
            self.parent[x] = self.find(self.parent[x])
            return self.parent[x]
    
    def unite(self, x, y):
        x = self.find(x)
        y = self.find(y)
        
        if x == y:
            return
    
        # 要素数が大きい方に小さいほうを加える
        # yの方が要素数が大きい場合
        if self.parent[x] > self.parent[y]:
            x, y = y, x
        
        # xを親にする
        self.parent[x] += self.parent[y]
        self.parent[y] = x

    def is_same(self, x, y):
        return self.find(x) == self.find(y)

    def size(self, x):
        return -self.parent[self.find(x)]

n, q = map(int, input().split())

uf = UnionFind(n)
for _ in range(q):
    p, a, b = map(int, input().split())

    if p == 0:
        uf.unite(a, b)
        
    elif p == 1:
        if uf.is_same(a, b):
            print("Yes")
        else:
            print("No")