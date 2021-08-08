#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	int k;cin>>k;
	int x=0;
	vector<int> v;
	for(int j=0;j<k;j++){
		for(int i=0;i<3;i++){
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin()+j*3,v.end());
	}
	int c=1;
	for(int i=1;i<v.size();i+=3){
		cout<<"Case "<<c<<": "<<v[i]<<endl;
		c++;
	}
	return 0;
}
