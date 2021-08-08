#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int num[n];
	long long v=0;
	long long p=0;
	int x=0;
	for(int i=0;i<n;i++){
		cin>>x;
		num[x-1]=i+1;
	}
	int k=0;cin>>k;
	int q[k];
	for(int i=0;i<k;i++){
		cin>>q[i];
	}
	for(int i=0;i<k;i++){
		v+=num[q[i]-1];
		p+=n-num[q[i]-1]+1;
	}


	cout<<v<<" "<<p;
	return 0;
}
