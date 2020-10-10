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
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    int pos = n - 1;
    while (pos > 0 && a[pos - 1] >= a[pos]) --pos;
    while (pos > 0 && a[pos - 1] <= a[pos]) --pos;
    cout << pos << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}