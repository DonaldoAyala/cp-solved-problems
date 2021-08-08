#include <bits/stdc++.h>
using namespace std;
int row=0,col=0;
vector<string> v;//forest
vector<vector<int>> g;//grid
vector<pair<int,int>> bredpos;//rows and columns of breeders
int mer,mec,er,ec;//my row and column, exit row and column
queue<pair<int,int>> q;
short mvs[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};

bool verify(int r, int c) {
	if(r >= row || r < 0 || c >= col || c < 0 || v[r][c] == 'T') return false;
	if(g[r][c] == -1 ) return true;
	return false;
}

void bfs() {
	int r,c;
	while(!q.empty()) {
		r = q.front().first;
		c = q.front().second;
		q.pop();
		if(v[r][c] != '0' && v[r][c] != 'S' && v[r][c] != 'E') bredpos.push_back(make_pair(r,c));
		for(auto x:mvs) {
			if(verify(r + x[0], c + x[1])){
				q.push(make_pair(r + x[0], c + x[1]));
				g[r + x[0]][c + x[1]] = g[r][c] + 1;
			}
		}
	}
}
void printg() {
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
			cout<<g[i][j]<<'/'<<v[i][j]<<'\t';
		}
		cout<<'\n';
	}
}
int main() {
	cin>>row>>col;
	v = vector<string>(row);
	g = vector<vector<int>>(row,vector<int>(col,-1));
	for (int i=0;i<row;++i) {
		cin>>v[i];
		for(int j=0;j<col;++j) {
			if(v[i][j] == 'E') er = i,ec = j;
			else if(v[i][j] == 'S') mer = i,mec = j;
		}
	}
	q.push(make_pair(er, ec));
	g[er][ec] = 0;
	bfs();
	int ans = 0;
	for(auto x:bredpos) {
		if (g[x.first][x.second] <= g[mer][mec]) ans += v[x.first][x.second] - '0';
	}
	cout<<ans<<endl;
	return 0;
}