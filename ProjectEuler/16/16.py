import sys
cin = lambda: sys.stdin.readline().strip()
cout = sys.stdout.write

digits = list(map(int,str(2**1000)))
ans = sum(digits)
cout(f"{ans}"+'\n')