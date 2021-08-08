#include <bits/stdc++.h>
using namespace std;

void print_grid(vector<vector<int>> g,vector<string> v){
	for(int i=0;i<g.size();i++){
		for(int j=0;j<g.size();j++){
			cout<<g[i][j]<<","<<v[i][j]<<"  |  ";
		}
		cout<<"\n";
	}
	cout<<"\n";
}

bool verify_up(auto g,int x,int y,vector<vector<int>> s){
	if(y - 1 < 0 || g[x][y-1] == 'X') return false;
	if(s[x][y] < s[x][y-1] || s[x][y-1] == -1) return true;
	return false;
}
bool verify_down(auto g,int x,int y,vector<vector<int>> s){
	if(y + 1 > g.size()-1 || g[x][y+1] == 'X') return false;
	if(s[x][y] < s[x][y+1] || s[x][y+1] == -1) return true;
	return false;
}
bool verify_left(auto g,int x,int y,vector<vector<int>> s){
	if(x - 1 < 0 || g[x-1][y] == 'X' ) return false;
	if(s[x][y] < s[x-1][y] || s[x-1][y] == -1) return true;
	return false;
}
bool verify_right(auto g,int x,int y,vector<vector<int>> s){
	if(x + 1 > s.size()-1 || g[x+1][y] == 'X') return false;
	if(s[x][y] < s[x+1][y] || s[x+1][y] == -1){
		return true;
	}
	return false;
}

void enqueue(vector<string> &g, queue<pair<int,int>> &q,vector<vector<int>> &s, int x,int y){
	int u=0,d=0,l=0,r=0;
	while(verify_left(g,x-l,y,s)){
		cout<<"push left"<<x-1-l<<" "<<y<<endl;
		q.push(make_pair(x-1-l,y));
		s[x-1-l][y] = s[x][y] + 1;
		l++;
	}
	while(verify_down(g,x,y+d,s)){
		cout<<"push down"<<x<<" "<<y+d+1<<endl;
		q.push(make_pair(x,y+1+d));
		s[x][y+1+d] = s[x][y] + 1;
		d++;
	}
	while(verify_right(g,x+r,y,s)){
		cout<<"push right"<<x+r+1<<" "<<y<<endl;
		q.push(make_pair(x+1+r,y));
		s[x+1+r][y] = s[x][y] + 1;
		r++;
	}
	while(verify_up(g,x,y-u,s)){
		cout<<"push up"<<x<<" "<<y-u-1<<endl;
		q.push(make_pair(x,y-1-u));
		s[x][y-1-u] = s[x][y] + 1;
		u++;
	}
}


int solution(vector<string> g,int x,int y,int fx, int fy){
	int cx=0,cy=0;
	vector<vector<int>> s(g.size(),vector<int>(g.size(),-1));
	queue<pair<int,int>> q;
	s[x][y] = 0;
	q.push(make_pair(x,y));
	while(!q.empty()){
		cx = q.front().first; cy = q.front().second;
		q.pop();
		if(cx == fx && cy == fy){
			return s[cx][cy];
		}
		enqueue(g,q,s,cx,cy);
		//print_grid(s,g);
	}
	return 0;
}

int main(){
	int n;cin>>n;
	int x,y,fx,fy;
	vector<string> g;
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		g.push_back(s);
	}
	cin>>x>>y>>fx>>fy;
	cout<<solution(g,x,y,fx,fy)<<endl;
	return 0;
}
