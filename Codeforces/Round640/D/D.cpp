#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	vector<int> moves;
	vector<int> a,b;
	int x;
	while(t--){
		vector<int> v;
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
		}
		int ca=0,cb=0;
		int pa=0,pb=v.size();
		int nMoves = 0;
		bool alice = true;
		int lmove=0;
		int cmove = 0;
		while(pa<pb){
			cmove = 0;
			if(alice){
				while(cmove <= lmove && pa<pb){
					cmove += v[pa];
					ca += v[pa];
					pa++;
				}
				alice = false;
			}else{
				while(cmove <= lmove && pa<pb){
					cmove += v[pb-1];
					cb += v[pb-1];
					pb--;
				}
				alice = true;
			}
			nMoves++;
			lmove = cmove;
		}
		moves.push_back(nMoves);
		a.push_back(ca);
		b.push_back(cb);
	}
	for(int i=0;i<moves.size();i++){
		cout<<moves[i]<<" "<<a[i]<<" "<<b[i]<<endl;
	}
	return 0;
}
