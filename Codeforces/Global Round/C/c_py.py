n = int(input())
fact = [0]*(n+1)
fact[0] = 1;fact[1] = 1;fact[2] = 2;
for i in range(3,n+1):
    fact[i] = i * fact[i-1]
ans = fact[n] - 2**(n-1)
ans = ans % (1000000000 + 7)
print(ans)