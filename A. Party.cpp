#include<bits/stdc++.h>
#define loop(i,a,n) for(int i=a;i<n;++i)
#define rloop(i,n,a) for(int i=n;i>=a;i--)
#define vi vector<int>
#define vl vector<long long int>
#define vvi vector<vector<int> >
#define vvl vector<vector<long long int> >
#define vpii vector<pair<int,int> >
#define vpll vector<pair<long long int,long long int> >
#define mpii map<int,int>
#define mpll map<long long int,long long int>
#define mpci map<char,int>
#define mpcl map<char,long long int>
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define V vector
#define P pair
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define IT iterator
#define MOD 1e9 + 7;
using namespace std;

typedef long long int ll;

vi level;
vi parent;

int height(int i){
    if (parent[i] == -1) return 1;
    if (level[i] != -10) return level[i];
    level[i] = 1 + height(parent[i]);
    return level[i];
}

void solve(){
    int n;
    cin >> n;
    map<int, vi> mp;
    parent = vi(n+1);
    level = vi(n+1, -10);
    loop(i,0,n){
        int a;
        cin >> a;
        parent[i+1] = a;
        mp[a].PB(i+1);
        // if (map.find(a) != map.end()){
        //     map[a].append(i+1);
        // }
        // else{
        //     map[a] = vi 
        // }
    }
    loop(i,1,n+1){
        level[i] = height(i);
    }
    int res = 0;
    loop(i,1,n+1){
        res = max(res, level[i]);
    }
    // for (auto const& i:mp){
    //     cout << i.F << "   { " ;
    //     if (i.S.size()){
    //         for (auto j: i.S){
    //             cout << j << "  ," ;
    //         }
    //         // res++;
    //     }
    //     cout << "} \n";
    // }
    // for (auto const& i:mp){
    //     for (auto j: i.S){
    //         if (j != i.S[0]){
    //             mp[i.S[0]].insert(mp[i.S[0]].end(), mp[j].begin(), mp[j].end());
    //             mp[j].clear();
    //         }
    //         // cout << j << "  ," ;
    //     }
    // }
    // for (auto const& i:mp){
    //     cout << i.F << "   { " ;
    //     if (i.S.size()){
    //         for (auto j: i.S){
    //             cout << j << "  ," ;
    //         }
    //         res++;
    //     }
    //     cout << "} \n";
    // }
    cout << res << endl;
}

int main(){
    int t=1;
    //cin >> t;
    while (t--) solve();
}