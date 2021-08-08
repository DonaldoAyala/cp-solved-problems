#include <bits/stdc++.h>
#define lli long long
using namespace std;

int mod(int a, int b) { return a & (b - 1); }

lli popCount(lli n){
	int c=0;
	while(n) c++,n&=n-1;
	return c;
}

int main(){
	lli t;cin>>t;
	lli a,b;
	lli c = 0,aux=0;
	while(t--){
		cin>>a>>b;
		c=0;aux = 0;
		if(popCount(a) == popCount(b)){
			if(a > b) {
				while(a > b){
					a >>= 1;
					c++;
				}
			} else {
				while(a < b){
					a <<= 1;
					c++;
				}
			}
			if(a == b){
				aux += c / 3;
				c %= 3;
				aux += c / 2;
				c %= 2;
				aux += c;
				cout<<aux<<'\n';
			} else {
				cout<<-1<<'\n';
			}
		} else {
			cout<<-1<<'\n';
		}
	}
	return 0;
}