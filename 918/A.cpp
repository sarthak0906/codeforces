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
    vi arr(n+1,0);
    int f = 1;
    int s = 1;
    arr[1] = 1;
    while(f+s <= n){
        arr[f+s] = 1;
        int t = f+s;
        f = s;
        s = t;
    }
    loop(i,1,n+1){
        if (arr[i] == 1) cout << "O";
        else cout << "o";
    }
    cout << endl;
    return;
}

int main(){
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}