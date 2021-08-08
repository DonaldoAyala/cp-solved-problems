#include <bits/stdc++.h>

using namespace std;

int main(){
	int tam = 0,valor = 0,n = 0,dato = 0;
	cin>>n;
	vector <int> nums;
	for(int i =0;i<n;i++){
		cin>>dato;
		nums.push_back(dato);
	}
	
	sort(nums.rbegin(),nums.rend());
	
	for(int i =0;i<n;i++){
		cout<<nums[i]<<endl;
	}
	
	
	
}
