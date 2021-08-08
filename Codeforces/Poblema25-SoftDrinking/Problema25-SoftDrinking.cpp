#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,l,c,d,p,nl,np;
	vector<int> v;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	v.push_back((k*l)/(n*nl));
	v.push_back((c*d)/n);
	v.push_back(p/(n*np));
	sort(v.begin(),v.end());
	cout<<v[0];
	return 0;
}
