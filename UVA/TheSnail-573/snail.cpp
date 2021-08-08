#include <bits/stdc++.h>
using namespace std;
int main(){
	int h,s,b;
	float f;
	vector<int> v;
	vector<bool> exito;	
	while(cin>>h>>s>>b>>f){
		if(h==0) break;
		float altura=0;
		int dia=0;
		f /= 100;
		while(1){
			if((s-(dia*f*s)) > 0)
				altura += s-(dia*f*s);
			if(altura > h){
				v.push_back(dia+1);
				exito.push_back(true);
				break;
			}
			altura -= b;
			if(altura < 0){
				v.push_back(dia+1);
				exito.push_back(false);
				break;
			}
			dia++;
		}
	}
	int c=0;
	for(auto x:exito){
		if(x) cout<<"success ";
		else  cout<<"failure ";
		cout<<"on day "<<v[c]<<endl;
		c++;
	}
	return 0;
}
