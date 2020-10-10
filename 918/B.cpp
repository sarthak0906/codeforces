#include<bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;++i)
#define rloop(i,a,b) for(int i=a;i>b;i--)
#define vi vector<int>
#define vl vector<long long int>
#define F first
#define S second

using namespace std;

typedef long long int ll;

void solve(){
    int n,m;
    cin >> n >> m;
    map<string, string> mp;
    loop(i,0,n){
        string a,b;
        cin >> a >> b;
        mp.insert(make_pair(b,a));
    }
    loop(i,0,m){
        string a,b;
        cin >> a >> b;
        string comment = mp[b.substr(0, b.size()-1)];
        cout << a << " " << b  << " #" << comment << endl;
    }
}

int main(){
    int t=1;
    // cin >> t;
    while(t--) solve();
    return 0;
}