#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	char x;
	int fives=0;
	int zeros=0;
	vector<char> v;
	while(n--){
		cin>>x;
		v.push_back(x);
	}
	for(int i=0;i<v.size();i++){
		if(v[i]=='5') fives++;
		else zeros++;
	}
	if(fives>=9 && zeros >0){
		fives -= fives%9;
		while(fives--)
			cout<<5;
		while(zeros--)
			cout<<0;
	}else if(zeros>0){
		cout<<0;
	}else{
		cout<<-1;
	}
	return 0;
}
