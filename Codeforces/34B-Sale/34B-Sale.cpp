#include <bits/stdc++.h>
using namespace std;
int main(){
	int atvs;cin>>atvs;
	int carry;cin>>carry;
	int aux;
	vector<int> tvs;
	while(atvs--){
		cin>>aux;
		tvs.push_back(aux);
	}
	aux =0;
	sort(tvs.begin(),tvs.end());
	for(int i=0;i<carry;i++){ 
		if(tvs[i]<0)
			aux += tvs[i];
	}
	cout<<aux*-1;
	return 0;
}
