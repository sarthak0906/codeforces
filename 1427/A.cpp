#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n, 0);

    int sum = 0;

    for(int i=0;i<n;++i){
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum == 0){
        cout << "NO\n";
        return;
    }

    if (sum > 0){
        sort(arr.begin(), arr.end(), greater<int> ());
        cout << "YES\n";
        for(int i=0;i<n;++i) cout  << arr[i] << " ";
        cout << endl;
        return;
    }

    sort(arr.begin(), arr.end());
    cout << "YES\n";
    for (int i=0;i<n;++i){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
}