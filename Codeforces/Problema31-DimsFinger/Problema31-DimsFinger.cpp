#include <bits/stdc++.h>
using namespace std;
int main(){
	int j;cin>>j;
	int s=0;
	int x=0;
	for(int i=0;i<j;i++){
		cin>>x;
		s+=x;
	}
	x=0;
	for(int i=s+1;i<=5+s;i++){
		if((i-1) % (j+1) != 0){
			x++;
		}
	}
	cout<<x;
	return 0;
}
