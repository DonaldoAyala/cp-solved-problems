#include <bits/stdc++.h>
using namespace std;
int main(){
	char palabra[100];
	for(int i=0;i<5;i++){
		scanf("%[^\n]",palabra);
		int c=0;
		while(palabra[c] != 0){
			cout<<palabra[c++];
		}
		cout<<";FIN"<<endl;
	}
	return 0;
}
