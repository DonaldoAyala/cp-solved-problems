#include <bits/stdc++.h>

using namespace std;

#define xx first
#define yy first
#define INF 1 << 40

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
typedef vector<vll> vvll;
typedef vector<pll> vpll;
typedef vector<vpll> vvpll;

struct Grafo
{
	vll val;
	vvll Fx;
	Grafo (ll n)
	{
		val.assign(n, INF);
		Fx.assign(n, vpll());
	}
	void join(ll x, ll y, ll z)
	{
		Fx[x].push_back(pll(y,z));
		Fx[y].push_back(pll(x,z));
	}
	void Dijkstra(ll x)
	{
		vpll::iterator it;
		pll aux;
		priority_queue<pll> cola;
		cola.push(pll(0,x));
		val[x] = 0;
		while (!cola.empty())
		{
			aux = cola.top();
			cola.pop();
			for ( it = Fx[aux.yy].begin() ; it != Fx[aux.yy].end() ; it++ )
			{
				if ( val[it->xx] > -(aux.xx) + it->yy)
				{
					val[it->xx] = (-aux.xx);
					cola.push(-val[it->xx], it->xx);
				}
			}
		}
	}
}

int main ()
{

	return 0;
}