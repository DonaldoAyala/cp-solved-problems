#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	string l;
	vector<string> ans;
	vector<int> nums;
	while(t--){
		string ac;
		
		cin>>l;
		int c=0;
		for(int i=0;i<l.size();i++){
			if(l[i]!= '0'){
				c++;
				ac.push_back(l[i]);
				for(int j=1;j<l.size()-i;j++)
					ac.push_back('0');
				ac.push_back(' ');
			}
		}
		nums.push_back(c);
		ans.push_back(ac);
	}
	for(int k=0;k<nums.size();k++){
		cout<<nums[k]<<endl;
		cout<<ans[k]<<endl;
	}	
	return 0;
}
