#include <bits/stdc++.h>

using namespace std;

vector<int> getPrimes(int n){
    vector<bool> is(n+1, true);
    vector<int> primes = {2}; 
    is[0] = is[1] = false;
    for(int i = 4; i <= n; i += 2){
        is[i] = false;
    }
    for(int i = 3; i <= n; i += 2){
        if(is[i]){
            primes.push_back(i);     
            if((long long)i*i <= n){ 
                for(int j = i*i; j <= n; j += 2*i){
                    is[j] = false;
                }
            }
        }
    }
    return primes;
}

bool lde ( int a, int n ) {
    while ( a && n ) {
        int r1 = a % 10;
        int r2 = n % 10;
        if ( r1 != r2 ) return false;
        a = a / 10; n = n / 10;
    }
    
    return true;
}

bool check( int n, int a, int b ) {
    if ( n % b != 0 ) return false;
    return lde(a, n);
}

int main () {
    vector<int> primes = getPrimes(1000000 + 1);
    long long int ans = 0;
    for ( int i = 2 ; i < primes.size() - 1; i ++ ) {
        for ( long long int j = primes[i + 1] ; ; j += primes[i + 1]) {
            if ( check(j, primes[i], primes[i+1]) ) {
                ans += j;
                cout << j << " " << primes[i] << " " << primes[i+1] << " " << j / primes[i+1] << endl;
                break;
            } 
        }
    }
    cout << ans << endl;
    return 0;
}
