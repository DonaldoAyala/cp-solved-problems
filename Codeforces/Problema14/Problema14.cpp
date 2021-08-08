#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int x=0;
	float resul=0;
	for(int i=0;i<n;i++){
		cin>>x;
		resul+=x;
	}
	resul /=n;
	printf("%.6f",resul);
	return 0;
}
