#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> arr(n);
        int mn = INT_MAX;
        for(int i=0;i<n;++i){
            cin >> a[i];
            arr[i] = a[i];
            mn = min (mn, a[i]);
        }
        sort(a.begin(), a.end());

        int k = 0;
        for(int i = 0; i < n; i++)
            if(arr[i] != a[i] && a[i] % mn > 0)
                k = 1;

        if(k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}