#include <bits/stdc++.h>
using namespace std;
int main () {
    int n ; cin >> n;
    for (int i=0;i<=n;i++) {
        for( int s=0;s<2*(n-i);s++) cout<<" ";
        cout<<0;
        if ( i > 0 ) cout <<" ";
        for(int v=1;v<=i;v++) cout<<v<<" ";
        for(int v=i-1;v>=1;v--) cout<<v<<" ";
        if ( i > 0 ) cout << 0;
        cout<<"\n";
    }
    for (int i=n-1;i>=0;i--) {
        for( int s=0;s<2*(n-i);s++) cout<<" ";
        cout<<0;
        if ( i > 0 ) cout <<" ";
        for(int v=1;v<=i;v++) cout<<v<<" ";
        for(int v=i-1;v>=1;v--) cout<<v<<" ";
        if ( i > 0 ) cout << 0;
        cout<<"\n";
    }
    return 0;
}
