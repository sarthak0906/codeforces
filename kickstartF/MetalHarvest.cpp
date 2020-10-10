#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<pair<int, int> > vec(n);
    for (int i=0;i<n;++i){
        cin >> vec[i].first >> vec[i].second;
    }

    auto srt = [](pair<int, int> a, pair<int, int> b){
        return a.first < b.first;
    };

    sort(vec.begin(), vec.end(), srt);
    int start = vec[0].first;
    int ret = 1;
    for (int i=0;i<n;++i){
        if (vec[i].second - start > k){
            while(vec[i].second - start > k){
                ret++;
                if (start + k > vec[i].first) start += k;
                else start = vec[i].first;
            }
            // if ((vec[i].second - start)/k > 1){
            //     ret += (vec[i].second - start)/k;
            //     start = start + int((vec[i].second - start)/k) * k;
            // }
            // ret++;
            // start = vec[i].first;
        }
    }
    cout << ret << endl;
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;++i){
        cout << " Case #" << i+1 << ": ";
        solve();
    }
}