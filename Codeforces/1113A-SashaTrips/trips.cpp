#include <bits/stdc++.h>
using namespace std;

int maxf;
int cities;

int main() {
	cin>>cities;
	cin>>maxf;
	if(maxf >= cities){
		cout<<cities - 1<<endl;
		return 0;
	}
	int fuel = 0;
	int cost = maxf;
	int i = 2;
	while(i <= cities - maxf) {
		cost += i;
		i++;
	}
	cout<<cost<<endl;
	return 0;
}