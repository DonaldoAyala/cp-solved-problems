#include <bits/stdc++.h>
using namespace std;

long long factorialRecursivo(int n){
	if(n == 1) return 1;
	return n*factorialRecursivo(n-1);
}
long long factorialIterativo(int n){
	for(int i=n-1;i>=1;i--){
		n *= i;
	}
	return n;
}

int main(){
	int n=15;
	cout<<factorialIterativo(n)<<endl;
	cout<<factorialRecursivo(n)<<endl;
	return 0;
}
