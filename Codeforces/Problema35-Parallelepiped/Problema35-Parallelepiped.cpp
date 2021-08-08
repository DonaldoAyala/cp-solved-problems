#include <bits/stdc++.h>
using namespace std;
int main(){
	int a1,a2,a3;
	cin>>a1>>a2>>a3;
	float x,y,z;
	x = sqrt((a1*a2)/a3);
	y = sqrt((a2*a3)/a1);
	z = sqrt((a1*a3)/a2);
	x*=4;
	x+=y*4;
	x+=z*4;
	cout<<x;
	return 0;
}
