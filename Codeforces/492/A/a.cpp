#include <bits/stdc++.h>
using namespace std;
int arr[4] = {1,5,10,20};
vector<int> memory((int)10e6,-1);
 
int solve(int n){
	if(n<=0) return 0;
	if(memory[n] != -1) return memory[n];
	int ans = (int)10e6;
	for(auto x:arr){
		if(n >= x)
			ans = min(ans,1+solve(n-x));
	}
	return memory[n] = ans;
}
 
int main(){
	int n;
	cin>>n;
	int aux = 0;
	if(n >= 100){
		aux = n/100;
		n %= 100;
	}
	cout<<solve(n)+aux<<'\n';
	return 0;
}