#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	int r=0,aux=0;
	int i1=0,i2=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	r=abs(a[0]-a[n-1]);
	i2 = 1,i1 = n;
	for(int i=0;i<n-1;i++){
		aux = abs(a[i]-a[i+1]);
		if(aux < r){
			r = aux;
			i1 = i+1;
			i2 = i+2;
		}	
	}
	cout<<i1<<" "<<i2;
	return 0;
}
