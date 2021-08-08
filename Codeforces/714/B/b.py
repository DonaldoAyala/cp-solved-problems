mod = 1e9 + 7

t = int(input())
for i in range(t):
    n, k = input().split()
    n = int(n)
    k = int(k)
    print(((n)** k) % (10**9 + 7))