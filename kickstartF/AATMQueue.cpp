#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,x;
    cin >> n >> x;
    vector<pair<int, double> > vec(n);
    for (int i=0;i<n;++i){
        int a;
        cin >> a;
        vec[i].first = i;
        vec[i].second = ceil(double(a/double(x)));
        // cout << double(a/double(x)) << "  ";
    }

    auto srt = [](pair<int, double>a, pair<int, double> b){
        return a.second < b.second;
    };

    stable_sort(vec.begin(), vec.end(), srt);
    for (int i=0;i<n;++i){
        cout << vec[i].first + 1 ;
        if (i == n-1) cout << "\n";
        else cout << " ";
    }
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;++i){
        cout << " Case #" << i+1 << ": ";
        solve();
    }
}