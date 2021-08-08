#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	long long x;
	vector <long long> ans;
	while(t--){
		long long n;cin>>n;
		vector<long long> v;
		for(long long i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
		}
		long long suma = 0;
		for(int i=0;i<v.size();i++){
			int max = 0;
			while( i < v.size() && v[i] > 0 ){
				if( v[i] > max)
					max = v[i];
				i++;
			}
			suma += max;
			if(i>v.size()) break;
			max = v[i];
			while(i<v.size() && v[i] < 0 ){
				if(v[i] > max)
					max = v[i];
				i++;
			}
			i--;
			suma += max;
		}
		ans.push_back(suma);
	}
	for(auto x:ans)
		cout<<x<<endl;
	return 0;
}
