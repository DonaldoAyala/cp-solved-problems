#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int b=0,l=0,x;
	int ac=0;
	n--;
	cin>>x;
	l=x;b=x;
	while(n--){
		cin>>x;
		if(x>b){
		       ac++;
			b=x;
		}
		if(x<l){
		       ac++;
		       l=x;
		}
	}
	cout<<ac;
	return 0;
}
