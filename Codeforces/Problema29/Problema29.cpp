#include <bits/stdc++.h>
using namespace std;
int main(){
	int x=0;
	int n;cin>>n;
	string p;
	while(n--){
		cin>>p;
		if(p[1]=='+')x++;
		else x--;
	}
	cout<<x;
	return 0;
}
