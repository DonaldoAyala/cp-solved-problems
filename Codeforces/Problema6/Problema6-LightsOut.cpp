#include <bits/stdc++.h>
using namespace std;

int toggle(int n){
	if(n==0)
		return 1;
	else
		return 0;
}

int main(){
	int a[3][3];
	int r[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
			r[i][j]=1;
		}
	}
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			if(a[i][j]%2 != 0){
				r[i][j]=toggle(r[i][j]);
				if(i-1 >= 0) r[i-1][j] = toggle(r[i-1][j]); 
				if(i+1 < 3) r[i+1][j] = toggle(r[i+1][j]);	
				if(j-1 >= 0) r[i][j-1] = toggle(r[i][j-1]); 
				if(j+1 < 3) r[i][j+1] = toggle(r[i][j+1]);
			}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<r[i][j];
		}
		cout<<"\n";
	}		
	return 0;
}
