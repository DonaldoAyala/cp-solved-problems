#include <bits/stdc++.h>
using namespace std;

int main(){
	//int t;cin>>t;
	string s;
	vector<long long> ans;
	while(cin>>s){
		long long weight = 0;
		//cin>>s;
		vector<vector<int>> area(2*s.size()+4,std::vector<int>(2*s.size()+4,0));
		int x=(2*s.size()+4)/2, y = (2*s.size()+4)/2;
		area[x][y]=1;
		for(int i=0;i<s.size();i++){
			if(s[i]=='N') y++;
			else if(s[i]=='S') y--;
			if(s[i]=='E') x++;
			else if(s[i]=='W') x--;
			if(area[x][y] == 0) weight+=5;
			else weight++;
			area[x][y]=1;
		}
		ans.push_back(weight);
	}
	for(auto x:ans)
		cout<<x<<"\n";
	return 0;
}


/*
int t;cin>>t;
	string s;
	vector<long long> ans;
	while(t--){
		cin>>s;
		int x=0,y=0;
		long long weight = 0;
		stack<char> p;
		p.push(s[0]);
		weight+=5;
		for(int i=1;i<s.size();i++){
			switch(s[i]){
				case 'N':
					if(!p.empty() && p.top()=='S'){
						weight++;
						p.pop();
					}else{
						weight += 5;
						p.push('N');
					}
				break;
				case 'S':
					if(!p.empty() && p.top()=='N'){
						weight++;
						p.pop();
					}else{
						weight += 5;
						p.push('S');
					}
				break;
				case 'W':
					if(!p.empty() && p.top()=='E'){
						weight++;
						p.pop();
					}else{
						weight += 5;
						p.push('W');
					}
				break;
				case 'E':
					if(!p.empty() && p.top()=='W'){
						weight++;
						p.pop();
					}else{
						weight += 5;
						p.push('E');
					}
				break;
			}
		}	
		ans.push_back(weight);
	}
	for(auto x:ans)
		cout<<x<<endl;

*/
