#include <bits/stdc++.h>
using namespace std;

void print_grid(vector<vector<pair<char,int>>> g){
	int n=0,m=0;
	if(n = g.size()) m = g[0].size(); 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<g[i][j].first<<","<<g[i][j].second<<"   ";
		}
		cout<<"\n";
	}
	cout<<"\n";
}

bool verify_up(auto g,int x,int y){
	if(y - 1 < 0 || g[x][y-1].first == 'X' || g[x][y-1].second > -1) return false;
	return true;
}
bool verify_down(auto g,int x,int y){
	if(y + 1 > g.size()-1 || g[x][y+1].first == 'X' || g[x][y+1].second > -1) return false;
	return true;
}
bool verify_left(auto g,int x,int y){
	if(x - 1 < 0 || g[x-1][y].first == 'X' || g[x-1][y].second > -1) return false;
	return true;
}
bool verify_right(auto g,int x,int y){
	if(x + 1 > g[0].size()-1 || g[x+1][y].first == 'X' || g[x+1][y].second > -1) return false;
	return true;
}

void enqueue(vector<vector<pair<char,int>>> &g, queue<pair<int,int>> &q, int x,int y){
	int u=0,d=0,l=0,r=0;
	while(verify_up(g,x,y-u)){ 
		q.push(make_pair(x,y-1-u));
		g[x][y-1-u].second = g[x][y].second + 1;
		u++;
	}
	while(verify_right(g,x+r,y)){
		q.push(make_pair(x+1+r,y));
		g[x+1+r][y].second = g[x][y].second + 1;
		r++;
	}
	while(verify_left(g,x-l,y)){
		q.push(make_pair(x-1-l,y));
		g[x-1-l][y].second = g[x][y].second + 1;
		l++;
	}
	while(verify_down(g,x,y+d)){
		q.push(make_pair(x,y+1+d));
		g[x][y+1+d].second = g[x][y].second + 1;
		d++;
	}
}


int solution(vector<vector<pair<char,int>>> g,int x,int y,int fx, int fy){
	int n=0,m=0;
	int cx,cy;
	if(n = g.size()) m = g[0].size(); 
	queue<pair<int,int>> q;
	q.push(make_pair(x,y));
	g[x][y].second = 0;
	while(!q.empty()){
		cx = q.front().first; cy = q.front().second;
		q.pop();
		if(cx == fx && cy == fy) return g[cx][cy].second;
		print_grid(g);
		enqueue(g,q,cx,cy);
	}
	return 0;
}


int main(){
	vector<vector<pair<char,int>>> g;
	int n,m;cin>>n>>m;
	int x,y,fx,fy;
	char c;
	vector<pair<char,int>> v;
	for(int i=0;i<n;i++){
		v.clear();
		for(int j=0;j<m;j++){
			cin>>c;
			if(c == 'I'){ x = i; y = j;}
			if(c == 'F'){ fx = i; fy = j;}
			v.push_back(make_pair(c,-1));
		}
		g.push_back(v);
	}
	cout<<solution(g,x,y,fx,fy)<<endl;
	print_grid(g);
	return 0;
}
