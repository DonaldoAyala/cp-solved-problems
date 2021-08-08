import sys
cin = lambda: sys.stdin.readline().strip()
cout = sys.stdout.write

n = 21
grid = [[-1]*n for i in range(n)]
print(grid)
def routes(fil, col):
	if (fil > n-1 or col > n-1):
		return 0
	if (fil == n-1 and col == n-1):
		grid[fil][col] = 1
	if(grid[fil][col] != -1):
		return grid[fil][col]
	grid[fil][col] = routes(fil +1, col) + routes(fil, col+1)
	return grid[fil][col]
a = routes(0,0)
print(a)