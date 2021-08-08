#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int s[n];
	int M=0,m=0;
	int iM=0,im=0;
	int dM=0;
	int dm=0;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	M=s[0];
	m=s[0];
	for(int i=0;i<n;i++){
		if(s[i]>M){
		        M=s[i];
			iM=i;
		}
		if(s[i]<=m){
		       m=s[i];
		       im=i;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(s[i]==m) break;
		else dm++;
	}
	for(int i=0;i<n;i++){
		if(s[i]==M) break;
		else dM++;
	}
	if(im<iM) dm--;
	dm+=dM;
	cout<<dm;
	return 0;
}
