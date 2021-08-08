#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
	int lDivisor = (int)sqrt(n);
	if(n == 2) return true;
	if(n > 2 && n%2 == 0) return false;
	for(int i=3;i<lDivisor+1;i+=2){
		if(n%i == 0) return false;
	}
	return true;
}

vector<bool> primes(2*1000000 + 5, true);
void primesDP () {
	primes[0] = false; primes[1] = false;
	for( int j = 2 ; j < 2*1000000 + 5 ; j++) {
		if(primes[j])
			for ( int i = j<<1 ; i < 2*1000000 + 5 ; i += j) {
				primes[i] = false;
			}
	}
}

int main(){
	//Method 1
	/*
	for(int i=2;i<2*1000000;i++)
		if(isPrime(i)) continue;
	*/
	//Method 2
	
	primesDP();
	cout<<"Primes 2"<<endl;
	for(int i=2;i<2*1000000;i++) {
		if(primes[i]) continue;
	}
	
	return 0;
}
