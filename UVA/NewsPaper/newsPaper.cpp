#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	vector<float> ans;
	while(t--){
		int q;cin>>q;
		char x;
		int y;
		float total= 0.0f;
		vector<int> v(256,0);
		while(q--){
			cin>>x;
			cin>>y;
			v[x] = y;
		}
		int m; cin>>m;
		cin.ignore();
		while(m--){
			string line;
			int c=0;
			getline(cin,line);
			while(line[c] != 0){
				total += v[line[c]];
				c++;
			}
		}
		ans.push_back(total);
	}
	for(auto x:ans)
		printf("%.2f$\n",x*(0.01));
	return 0;
}
