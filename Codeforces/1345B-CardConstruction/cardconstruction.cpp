#include <bits/stdc++.h>
#define max 25821
using namespace std;

vector<int> cards(max);


int solve(int n) {
	int c = 0;
	while(n > 1) {
		c++;
		auto h = lower_bound(cards.begin(),cards.end(),n);
		if(n >= *h) n -= *h;
		else if(n < *h) --h, n -= *h;
	}
	return c;
}

int main() {
	//La posición h (altura) tiene el numero de cartas necesarias.
	for(int i=0 ; i<max ; i++){
		cards[i] = (3*i*i + i) / 2;
	}
	int t; cin>>t;
	int x;
	while(t--){
		cin>>x;
		cout<<solve(x)<<'\n';
	}
	return 0;
}