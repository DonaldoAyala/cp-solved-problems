import sys
import math
cin = lambda: sys.stdin.readline().strip()
cout = sys.stdout.write

def solve():
	n,k = n,m=map(int,cin().split())
	C = []
	dp = [math.inf]*n
	for i in range(n):
		C.append(int(cin()))
	for i in range(k+1):
		dp[i] = 0
	for i in range(k+1,n):
		for j in range(1,k+1):
			if (C[i-j] != 0):
				if(dp[i] > dp[i-j] + C[i-j]):
					dp[i] = dp[i-j] + C[i-j]
	if(dp[n-1] >= math.inf):
		cout(f"{-1}"+'\n')
	else:
		cout(f"{dp[n-1]}"+'\n')

t = int(cin())
for i in range(1,t+1):
	cout(f"Case #{i}: ")
	n,k = map(int,input().split())
	C = []
	dp = [math.inf]*n
	for i in range(n):
		C.append(int(cin()))
	if (n == k):
		cout(f"{0}"+'\n')
		continue
	for i in range(k+1):
		dp[i] = 0
	for i in range(k+1,n):
		for j in range(1,k+1):
			if (C[i-j] != 0):
				if(dp[i] > dp[i-j] + C[i-j]):
					dp[i] = dp[i-j] + C[i-j]
	if(dp[n-1] >= math.inf):
		cout(f"{-1}"+'\n')
	else:
		cout(f"{dp[n-1]}"+'\n')