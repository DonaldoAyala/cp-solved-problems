import sys

cin = lambda: sys.stdin.readline().strip()
cout = sys.stdout.write
a, b = map(int, cin().split())

cout(f"{a**b - b**a}\n")
