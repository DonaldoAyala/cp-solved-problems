#include <bits/stdc++.h>
using namespace std;

#define lli long long int

vector<lli> v;
lli n;
vector<lli> mem;

lli sol(int i,int j) {
	if(j == n) return abs(v[j]-v[i]);
	if(j > n) return LONG_LONG_MAX;
	if(mem[j] != -1) return mem[j];
	return mem[j] = min(sol(j,j+1),sol(j,j+2)) + abs(v[j]-v[i]);
}

int main() {
	cin>>n;
	v = vector<lli>(n+1);
	mem = vector<lli>(n+1,-1);
	int i = 0;
	while(i < n) cin>> v[1 + i++];
	cout<<sol(1,1)<<'\n';
}