#include <bits/stdc++.h>
using namespace std;
int main(){
	int k=0;
	int dx=0,dy=0;
	int x=0,y=0;
	vector<string> v;
	while(true){
		cin>>k;
		if(k!=0){
			cin>>dx>>dy;
			for(int i=0;i<k;i++){
				cin>>x>>y;
				if(x > dx && y > dy) v.push_back("NE");
				else if( x < dx && y > dy) v.push_back("NO");
				else if( x < dx && y < dy) v.push_back("SO");
				else if( x > dx && y < dy) v.push_back("SE");
				else v.push_back("divisa");
			}
		}else{break;}
	}
	for(auto x:v)
		cout<<x<<endl;
	return 0;
}
