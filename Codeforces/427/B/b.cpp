#include<bits/stdc++.h>
using namespace std;
 
int cood[101][101][11];
int star[101][101][11];
 
int main() {
	int n, q, c, x, y, s;
	cin >> n >> q >> c;
	for (int i = 0; i < n; i++) {
		cin >> x >> y >> s;
		star[x][y][0] = 0;
		star[x][y][0] += s;
		cood[x][y][0] += s;
		for (int i = 1; i <= c; i++) {
			s++;
			star[x][y][i] = (star[x][y][i - 1] + 1)%(c+1);
			cood[x][y][i] += star[x][y][i];
		}
		
	}
	for (int k = 0; k <= c; k++) {
		for (int i = 1; i < 101; i++) {
			for (int j = 1; j < 101; j++) {
				cood[i][j][k] = cood[i][j][k] + cood[i][j - 1][k] + cood[i - 1][j][k] - cood[i - 1][j - 1][k];
			}
		}
	}
 
	int t, x1, x2, y1, y2;
	while (q--) {
		cin >> t >> x1 >> y1 >> x2 >> y2;
		t = t%(c+1);
		cout << cood[x2][y2][t] - cood[x1 - 1][y2][t] - cood[x2][y1 - 1][t] + cood[x1 - 1][y1 - 1][t] <<"\n";
	}
 
	return 0;
}