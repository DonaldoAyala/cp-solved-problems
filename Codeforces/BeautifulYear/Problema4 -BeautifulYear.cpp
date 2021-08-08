#include <bits/stdc++.h>

using namespace std;

int main(){
	int year;cin>>year;
	int u=year%10;year/=10;
	int d=year%10;year/=10;
	int c=year%10;year/=10;
	int m=year%10;
	u++;
for(int i=0;i<10;i++){
	for(m;m<10;m++){
		for(c;c<10;c++){
			for(d;d<10;d++){
				for(u;u<10;u++){
					if(m!=c&&m!=d&&m!=u&&c!=d&&c!=u&&d!=u){
						cout<<m<<c<<d<<u<<"\n";
						i=10;m=10;c=10;d=10;u=10;
					}
				}
				u=0;
			}
			d=0;
		}
		c=0;
	}
	m=0;
	}
}
