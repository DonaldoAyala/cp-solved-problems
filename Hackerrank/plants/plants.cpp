#include<bits/stdc++.h>
using namespace std;

vector<int> days;

int pplants(vector<int> &p) {
	int min = p[0];
	int max = 0;
	stack<int> s;
	s.push(0);
	for(int i=1;i<p.size();i++) {
	    if(p[i] > p[i-1])
	        days[i] = 1;
	    if(min > p[i]) min = p[i];
	    while(!s.empty() && p[s.top()] >= p[i]){
	       if(p[i] > min){
	           if(days[i] < days[s.top()] + 1){
	               days[i] = days[s.top()] + 1;
	           }
	       	}
	        s.pop();
	    }  
	    max = max>days[i]?max:days[i];
	    s.push(i);
	}
	return max;
}

int main() {
	int n; cin>>n;
	days = vector<int>(n);
	vector<int> p(n);
	for(int i=0;i<n;i++)
	    cin>>p[i];
	cout<<pplants(p)<<'\n';
}