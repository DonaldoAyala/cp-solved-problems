#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin>>n;
	vector<int> t(n);//team's skills
	vector<int> d(10,0);//difficulty
	int mi = 1 << 10;
	int min_dif = 1 << 10;
	int x;
	for(int i=0;i<n;i++) {
		cin>>t[i];
		mi = min(mi,t[i]);
	}
	for(int i=0;i<10;i++) {
		cin>>d[i];
		min_dif = min(min_dif,d[i]);
	}
	if(min_dif <= mi) cout<<10<<endl;
	else cout<<mi<<endl;
	return 0;
}