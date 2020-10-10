#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, pair<int, int> > > arr(n);
        for (int i=0;i<n;++i){
            cin >> arr[i].first >> arr[i].second.first >> arr[i].second.second;
        }
        sort(arr.begin(), arr.end(), sorter)
    }
}