#include <bits/stdc++.h>
using namespace std;
int main(){
	int k;cin>>k;
	int x=0,j=0;
	vector<int> v;
	for(int i=0;i<12;i++){
		cin>>x;
		v.push_back(x);
	}
	x=0;
	sort(v.begin(),v.end(),greater<>());
	while(x<k && j<v.size()){
		x+=v[j];
		j++;
	}
	if(x>=k)
		cout<<j;
	else 
		cout<<-1;
	return 0;
}
