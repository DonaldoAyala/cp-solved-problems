#include <bits/stdc++.h>

using namespace std;
int main(){
	int n;cin>>n;
	int a;cin>>a;
	int b;cin>>b;
	n-=a;
	if(n<=b)
		cout<<n<<endl;
	else
		cout<<b+1<<endl;
	return 0;
}
