#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	int n,b,h,w;
	vector<int> v;

	while(cin>>n>>b>>h>>w){
		vector<int> posibles;
		for(int i=0;i<h;i++){
			int lugares=0;
			int x;
			int precio;cin>>precio;
			for(int j=0;j<w;j++){
				cin>>x;
				if(x>lugares) lugares = x;
			}
			if(n*precio <= b){
				if(n <= lugares) posibles.push_back(n*precio);
			}
		}
		if(posibles.size() > 0){
		        sort(posibles.begin(),posibles.end());
			v.push_back(posibles[0]);
		}else{
			v.push_back(-1);
		}
	}
	for(auto x:v){
		if(x > -1)
			cout<<x<<endl;
		else 
			cout<<"stay home"<<endl;
	}
	return 0;
}
