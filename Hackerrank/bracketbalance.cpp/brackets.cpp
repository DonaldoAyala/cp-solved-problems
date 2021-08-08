#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	vector<bool> v;
	string s;
	while(t--){
		cin>>s;
		bool ca = true;
		char pila[s.size()];
	    int tope = -1;
	    for(int i=0;i<s.size();i++){
	        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
	            pila[++tope] = s[i];
	        }else {
	            switch (s[i]) {
	                case ')':
	                if(tope > -1)
	                    if(pila[tope--] != '('){
	                        v.push_back(false);
	                    }
	                break;
	                case ']':
	                if(tope > -1)
	                    if(pila[tope--] != '['){
	                        v.push_back(false);
	                    }
	                break;
	                case '}':
	                    if(tope > -1)
	                        if(pila[tope--] != '{'){
	                            v.push_back(false);
	                        }
	                break;
	            }
	        }
	    }
	    if(tope == -1) v.push_back(true);
	    else v.push_back(false);
	}
	for(auto x:v) 
		if(x) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	
	return 0;
}
