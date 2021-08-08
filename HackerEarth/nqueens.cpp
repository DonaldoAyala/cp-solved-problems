#include <bits/stdc++.h>
using namespace std;

bool canplace(vector<vector<int>> &v,int i,int j){
	for(int ii=i,int jj=i;ii<)
}

bool nqueens(vector<vector<int>> &v,int &n,int i){
	if(i==v.size()) return true;
	for(int j=0;j<n;j++){
		if(canplace(i,j)){
			if(nqueens(v,n,i + 1)){
				return true;
			} else {
				v[i][j] = 0;
			}
		}
	}
	return false;
}

int main(){
		int n;
		vector<vector<int>> v(n,vector<int>(n,0));
		if(nqueens(v,n,i))
		for(auto x:v){
			for(auto y:x){
				cout<<y<<" ";
			}
			cout<<'\n';
		}
		else cout<<"Not possible"<<'\n';
		return 0;
}

