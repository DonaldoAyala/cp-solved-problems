#include <bits/stdc++.h>
using namespace std;

bool up(int y){
	return y-1 >= 0;
}
bool right(int x,int size){
	return x+1 < size;
}
bool left(int x){
	return x-1 >= 0;
}
bool down(int y,int size){
	return y+1 < size;
}

void solveRecursive(vector<vector<char>> &v,priority_queue<int> &q,queue<pair<int,int>> &nq,int traps){
	int y = nq.front().second;
	int x = nq.front().first;
	nq.pop();
	int t = 0;
	if(v[y][x] == 'x') t++;
	if(v[y][x] == 'S') q.push(-traps);
	if(v[y][x] == '#')
		return;
	v[y][x] = '#';
	if(up(y)) 		nq.push(make_pair(x,y-1));
	if(right(x,v[0].size()))nq.push(make_pair(x+1,y));
	if(down(y,v.size())) 	nq.push(make_pair(x,y+1));
	if(left(x)) 		nq.push(make_pair(x-1,y));
}

void solve(vector<vector<char>> v){
	
}

int main(){
	int n,m;cin>>n>>m;
	int x,y;cin>>y>>x;
	vector<vector<char>> v(n,vector<char>(m,0));
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			cin>>v[i][j];
		}
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
