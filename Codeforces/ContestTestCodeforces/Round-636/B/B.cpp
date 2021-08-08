#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	int x;
	vector<int> v;
	while(t--){
		cin>>x;
		int sum = 3;
		int y=1;
		while(1){
			if( x % sum == 0){
				v.push_back(x/sum);
				break;
			}else{
				y++;
				sum += pow(2,y);
			}
		}
	}
	for(auto x:v)
		cout<<x<<endl;
	return 0;
}
