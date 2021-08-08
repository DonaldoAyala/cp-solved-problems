#include <bits/stdc++.h>
using namespace std;
int main(){
	string line;
	list<char> word;
	list<char>::iterator it;
	while(cin>>line){
		word.clear();
		it = word.begin();
		for(int i=0;i<line.size();i++){
			if(line[i] == '[')
				it = word.begin();
			else if(line[i] == ']')
				it = word.end();
			if(line[i] != ']' && line[i] != '[')
				word.insert(it,line[i]);
		}
		for(it = word.begin();it != word.end();it++)
			cout<<*it;
		cout<<endl;
	}
	return 0;
}	
