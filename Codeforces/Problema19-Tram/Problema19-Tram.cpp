#include <bits/stdc++.h>

using namespace std;
int main(){
	int n;cin>>n;
	int maxC=0,people=0,x;
	for(int i=0;i<n;i++){
		cin>>x;
		people-=x;
		cin>>x;
		people+=x;
		if(people>maxC) maxC = people;
	}
	cout<<maxC;
	return 0;
}
