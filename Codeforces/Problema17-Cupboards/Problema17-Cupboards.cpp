#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int lo=0,ro=0;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x==1) lo++;
		cin>>x;
		if(x==1) ro++;
	}
	x =0;
	if(lo <= n-lo) x+=lo;
	else x += n-lo;
	if(ro <= n-ro) x+=ro;
	else x += n-ro;
	cout<<x;
	return 0;
}
