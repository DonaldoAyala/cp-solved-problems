#include <bits/stdc++.h>
#define lli long long
using namespace std;

lli a[3];
lli memoria[(int)10e4];

lli recursiva(lli n) {
	if(n==0) return 0;
	if(n<0) return -(1<<25);
	if(memoria[n] != -1) return memoria[n];
	memoria[n] = max(max(recursiva(n-a[0]),recursiva(n-a[1])),recursiva(n-a[2])) + 1;
	return memoria[n];
}

int main() {
	lli n;
	cin>>n>>a[0]>>a[1]>>a[2];
	memset(memoria,-1,sizeof(memoria));
	cout<<recursiva(n)<<endl;
	return 0;
}

