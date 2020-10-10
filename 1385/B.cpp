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
    int n;
    cin >> n;
    vi arr;
    vi mp(n+1,-1);
    loop(i,0,2*n){
        int a;
        cin >> a;
        if (mp[a] == -1){
            arr.push_back(a);
            mp[a] = i;
        }
    }
    for (auto i:arr) cout << i << " ";
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}