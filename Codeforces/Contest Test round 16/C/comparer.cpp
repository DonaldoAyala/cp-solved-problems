#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<string> v;
	vector<string> input;
	string l;
	vector<string> ans;
	while(cin>>l){
		v.push_back(l);
	}
	int c=0;
	for(int i=0;i<v.size()/2;i++)
		if(v[i]!=v[(i+v.size()/2)]){
			cout<<"Input: "+v[i]+"!="+v[(i+v.size()/2)]+"\n";
		}
	return 0;
}
