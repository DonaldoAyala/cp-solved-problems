#include<bits/stdc++.h>
using namespace std;
#define forM for(int i = 0; i < n; i++) for(int j = 0; j < n; j++)
int main(void){
	int startX, startY, goalX, goalY, x, y, auxX, auxY, n, min = -1, first = -1, gridValue = -1;
	string buffer;
	cin >> n >> startX >> startY >> goalX >> goalY;
	vector<string> grid(n);
	vector<vector<int>> auxGrid;
	vector<pair<int,int>> queue;
	vector<int> aux(n,-1);
	for(int i = 0; i < n; i++){
		cin >> buffer;
		grid[i] = buffer;
		auxGrid.push_back(aux);
	}

	queue.push_back(make_pair(startX,startY));
	auxGrid[startX][startY] = 0;
	first = 0;

    while(first > -1){		
        if(first < queue.size()){
            x = queue[first].first;
            y = queue[first].second;
            auxX = x;
            auxY = y;

		if(auxGrid[x][y] > gridValue){
			gridValue++;
			forM{
				if(auxGrid[i][j] >= 0) cout << auxGrid[i][j] << " ";
				else cout << grid[i][j] << " ";
				if(j == n-1) cout << endl;
			}
			cout << endl;
		}

            while(auxX+1 < n && grid[auxX+1][y] != 'X' && (auxGrid[auxX+1][y] == auxGrid[x][y] + 1 || auxGrid[auxX+1][y] < 0)){
                auxX++;
                if(auxGrid[auxX][y] < 0){
	                queue.push_back(make_pair(auxX,y));
	                auxGrid[auxX][y] = auxGrid[x][y]+1;
	                if(auxX == goalX && y == goalY){min = auxGrid[x][y]+1; break;}
            	}
            }
            auxX = x;
            
            while(auxY+1 < n && grid[x][auxY+1] != 'X' && (auxGrid[x][auxY+1] == auxGrid[x][y] + 1 || auxGrid[x][auxY+1] < 0)){
                auxY++;
                if(auxGrid[x][auxY] < 0){
	                queue.push_back(make_pair(x,auxY));
	                auxGrid[x][auxY] = auxGrid[x][y]+1;
	                if(x == goalX && auxY == goalY){min = auxGrid[x][y]+1; break;}
	            }
            }
            auxY = y;
            
            while(auxX-1 >= 0 && grid[auxX-1][y] != 'X' && (auxGrid[auxX-1][y] == auxGrid[x][y] + 1 || auxGrid[auxX-1][y] < 0)){
                auxX--;
                if(auxGrid[auxX][y] < 0){
		            queue.push_back(make_pair(auxX,y));
		            auxGrid[auxX][y] = auxGrid[x][y]+1;
		            if(auxX == goalX && y == goalY){min = auxGrid[x][y]+1; break;}
		        }
            }
            auxX = x;
            
            while(auxY-1 >= 0 && grid[x][auxY-1] != 'X' && (auxGrid[x][auxY-1] == auxGrid[x][y] + 1 || auxGrid[x][auxY-1] < 0)){
                auxY--;
                if(auxGrid[x][auxY] < 0){
		            queue.push_back(make_pair(x,auxY));
		            auxGrid[x][auxY] = auxGrid[x][y]+1;
		            if(x == goalX && auxY == goalY){min = auxGrid[x][y]+1; break;}
		        }
            }
            auxY = y;

            first++;
        }
        else first = -1;
    }
	cout << endl << min << endl;
	return 0;
}
