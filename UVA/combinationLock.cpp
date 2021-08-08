#include <bits/stdc++.h>
using namespace std;
int main(){
	int pos[4];
	int resul=1080;
	for(int i=0;i<4;i++){
		cin>>pos[i];
		pos[i]*=9;
	}
	if(pos[0]<pos[1])
		resul += pos[0] + (360 - pos[1]);
	else
		resul += pos[0] - pos[1];
	if(pos[2] > pos[1])
		resul += pos[2] - pos[1];
	else 
		resul += pos[2] + 360 - pos[1];
	if(pos[2] > pos[3])
		resul += pos[2] - pos[3];
	else
		resul += pos[2] + 360 - pos[3];
	cout<< resul << endl;
	return 0;
}
