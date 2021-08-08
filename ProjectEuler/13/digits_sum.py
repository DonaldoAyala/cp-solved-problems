import sys
cin = lambda: sys.stdin.readline().strip()
cout = sys.stdout.write
ans = 0
for x in range(100):
    ans += int(cin());
cout(''.join(str(ans)[:10])+'\n')


