#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	int x;
	vector<int> v;
	vector<int> an;
	while(t--){
		cin>>x;
		if( x/2 % 2 == 0){
			v.push_back(x);
		}else{
			v.push_back(0);
		}
	}
	for(auto x:v){
		int suma=0;
		int sumaimp = 0;
		if(x > 0){
			cout<<"YES"<<endl;
			for(int i=0; i < x/2 ; i++){
				cout<< 2*(i +1)<<" ";
				suma += 2*(i+1);
			}
			for(int i=0; i< (x/2)-1 ; i++){
				cout<< 2*(i+1) -1  << " ";
				sumaimp += 2*(i+1)-1;
			}
			cout<<suma-sumaimp<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
