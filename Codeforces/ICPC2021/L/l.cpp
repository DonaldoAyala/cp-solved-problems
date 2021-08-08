#include <bits/stdc++.h>

using namespace std;

vector<int> ps;

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


map<int, int> factorize(int n){
    map<int, int> fact;
    for( auto x : ps ){
        if(n % x == 0){
            int exponent = 0;
            while(n % x == 0){
                n /= x;
                exponent++;
            }
            fact[x] = exponent;
        }
    }
    if(n > 1){
        fact[n] = 1;
    } 
    return fact;
}

void solve() {
    int a, b; cin >> a >> b;
    map<int, int> af = factorize(a);
    //for ( auto x : af ) cout << x.first << "^" << x.second << " ";
    //cout << endl;
    map<int, int> bf = factorize(b);
    //for ( auto x : bf ) cout << x.first << "^" << x.second << " ";
    //cout << endl;
    af.insert(bf.begin(), bf.end());
    cout << af.size() << endl;
}

int main () {
    int t; cin >> t;
    ps = getPrimes(4000);
    while (t--) solve();
    return 0;
}
