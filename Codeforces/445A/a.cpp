#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;
string t = "abacaba";

string S = "abacaba";
 
bool checker(string s)
{
    int n = s.size();
    int cnt = 0;
    for (int i = 0; i+7<=n; i++)
    {
        if (s.substr(i, 7)==S) cnt++;
    }
    return (cnt==1);
}
 
void solve()
{
    string kek;
    int n; cin>>n;
    string s;
    cin>>s;
 
    for (int i = 0; i+7<=n; i++)
    {
        bool check = true;
        for (int j = 0; j<7; j++) if (s[i+j]!='?' && s[i+j]!=S[j]) check = false;
        if (!check) continue;
        string s1;
        for (int j = 0; j<n; j++)
        {
            if (i<=j && j<i+7) s1+=S[j-i];
            else if (s[j]=='?') s1+='z';
            else s1+=s[j];
        }
        if (checker(s1))
        {
            cout<<"Yes"<<endl<<s1<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
 
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while (t--) solve();
 
 
 
 
}