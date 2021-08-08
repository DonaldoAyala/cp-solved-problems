#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> vec;
	vector<int> primes;
	for(int i=0;i<60;i++){
		vec.push_back(i);
	}
	
	for(int i=2;i<vec.size();i++){
		for(int j=2;j<vec.size();j++){
			if((i*j)<vec.size()){
				vec[i*j]=1;
			}	
		}
	}
	for(auto x:vec){
		if(x>1){
			primes.push_back(x);
		}
	}
	
	int c;cin>>c;
	int x;cin>>x;
	
	for(int i=0;i<primes.size()-1;i++){
		if(primes[i]== c){
			if(primes[i+1]==x){
				cout<<"YES";
			}else{
				cout<<"NO";
			}
			break;
		}
	}
	
	return 0;
}
