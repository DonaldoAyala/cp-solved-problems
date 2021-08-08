#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a,b,c;
	vector <long long> v;
	cin>>n>>a>>b>>c;
	v.push_back(0);
	if(n%a == 0)  v.push_back(n/a);
	if( n%b == 0)  v.push_back(n/b);
	if( n%c == 0)  v.push_back(n/c);
	
	if( (n%a)%b == 0){
		v.push_back((n/a) + (n%a)/b);
		v.push_back((n/b) + (n%b)/a);
	}
	if( (n%a)%c == 0){
		v.push_back((n/a) + (n%a)/c);
		v.push_back((n/c) + (n%c)/a);
	}
	if( (n%b)%c == 0){
		v.push_back((n/b) + (n%b)/c);
		v.push_back((n/c) + (n%c)/b);
	}
//	if(! ((n%a)%b)&c){ 
//		v.push_back(((n/a)/b)/c);
//	}
//	if(! ((n%b)%c)&a)  v.push_back(n/a);
//	if(! ((n%a)%c)&b)  v.push_back(n/a);
	sort(v.begin(),v.end());
	cout<<v[v.size()-1]<<endl;
	return 0;
}
