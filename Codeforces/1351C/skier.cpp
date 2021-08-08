#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin>>n;
    string s;
    int x = 0, y = 0;
    int ax, ay;
    set< pair<  pair<int,int> , pair<int,int>  > > edg;
    while ( n-- ) {
        cin >> s;
        x = 0; y = 0;
        ax = 0; ay = 0;
        int time = 0;
        edg.clear();
        for ( int i = 0 ; i < s.size() ; i++) {
            if ( s[i] == 'N' )  y++;
            else if ( s[i] == 'S' )  y--;
            else if ( s[i] == 'E' )  x++;
            else  x--;
           if ( !edg.count({{ax,ay}, {x,y}} ) && !edg.count({{x,y} ,{ax,ay}} )) {
               time += 5;
                edg.insert({{ax,ay}, {x,y}});
           }
           else time++;
           ax = x; ay = y;
        }
        cout << time << '\n';
    }
    return 0;
}
