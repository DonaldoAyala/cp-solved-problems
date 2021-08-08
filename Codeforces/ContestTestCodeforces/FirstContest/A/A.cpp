#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	int n,m;
	while(t--){
		cin>>n>>m;
		int b = ((n*m)/2)+1;
		int w = (n*m)-b;
		int f =0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m/2;j++){
				if(f == 0){
					if(b > 0){
					       	cout<<"B";
						b--;
					}
				}else{
					if(w>0){
						cout<<"W";
						w--;
					}
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
