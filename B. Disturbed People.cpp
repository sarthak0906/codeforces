#include <bits/stdc++.h>

using namespace std;

bool check(vector<int> arr){
    for(int i = 1; i+1 < arr.size(); ++i){
        if(arr[i] == 0 && arr[i+1] == 1 && arr[i-1])return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    vector <bool> p(n,true);
    set<pair<int,int> > ans;
    for (int i=0;i<n;++i)cin >> arr[i];
    for(int i = 1; i+1 < n; ++i){
        if(arr[i] == 0 && arr[i-1] == 1 && arr[i+1] == 1){
            p[i-1] = false;
            p[i+1] = false;
        }
    }
    for(int i = 0; i < n; ++i){
        if(p[i])continue;
        arr[i] = 0;
        for(int j = i+1; j < n; ++j){
            if(p[j])continue;
            arr[j] = 0;
            if(check(arr)){
                ans.insert(make_pair(i,j));
            }
            arr[j] = 1;
        }
        arr[i] = 1;
    }
    cout << ans.size();
    return 0;
}
