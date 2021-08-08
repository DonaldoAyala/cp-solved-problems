#include <bits/stdc++.h>
#define lli long long
using namespace std;

vector<pair<int,int>> moves = {{0,-1},{0,1},{1,1},{-1,-1}};

void solve() {
	int s, ra, pa, rb, pb, c; cin>>s>>ra>>pa>>rb>>pb>>c;
	map<pair<int,int>, int> g;
	for ( int i = 1 ; i <= s ; i++ ) {
		for ( int j = 1 ; j <= 1 + 2*(i - 1) ; j++ ) {
			g[{i,j}] = 0;
		}
	}
	int ro,co;
	for ( int i = 0 ; i < c ; i++ ) {
		cin >> ro >> co;
		g[{ro,co}] = -1;
	}
	queue<pair<int,int>> pos;
	pair<int,int> curr = {ra,pa};
	g[{ra,pa}] = 0;
	pos.push(curr);
	while ( !pos.empty() ) {
		curr = pos.front();
		pos.pop();
		for ( auto mv : moves ) {
			if ( g.count({curr.first + mv.first , curr.second + mv.second}) ) {
				if ( g[{curr.first + mv.first , curr.second + mv.second}] == 0 ) {
					g[{curr.first + mv.first , curr.second + mv.second}] = g[curr] + 1;
					pos.push({curr.first + mv.first , curr.second + mv.second});
				}
			}
		}
	}
	/*
	for ( int i = 1 ; i <= s ; i++ ) {
		for ( int j = 1 ; j <= 1 + 2*(i - 1) ; j++ ) {
			cout << g[{i,j}] << " ";
		}
	}
	cout << endl;
	*/
	curr = {rb,pb};
	g[	curr] = 0;
	pos.push(curr);
	while ( !pos.empty() ) {
		curr = pos.front();
		pos.pop();
		for ( auto mv : moves ) {
			if ( g.count({curr.first + mv.first , curr.second + mv.second}) > 0) {
				if ( g[curr]*-1 + 1 < g[{curr.first + mv.first , curr.second + mv.second}] ) {
					g[{curr.first + mv.first , curr.second + mv.second}] = g[curr] - 1;
					pos.push({curr.first + mv.first , curr.second + mv.second});
				}
			}
		}
	}
	int answer = 0;
	
	for ( int i = 1 ; i <= s ; i++ ) {
		for ( int j = 1 ; j <= 1 + 2*(i - 1) ; j++ ) {
			//cout << g[{i,j}] << " ";
			if (g[{i,j}] > answer) answer = g[{i,j}];
		}
	}
	//cout << endl;
	cout << " " << answer;
}

int main () {
    int t; cin >> t;
    for ( int i = 0 ; i < t ; i++ ) { 
        cout << "Case #" << i + 1 << ":";
        solve();
        cout << endl;
    }
    return 0;
}