#include <bits/stdc++.h>

using namespace std;

int main(){
	string pal; cin>>pal;
	for(int letra=0;letra<pal.size();letra++){
		if(pal[letra] == '.') cout<<'0';
		else{
			if(pal[letra+1]=='.') cout<<'1';
			else cout<<'2';
			letra++;
		}
	}
}
