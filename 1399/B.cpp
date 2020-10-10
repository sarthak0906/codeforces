#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        int amin = INT_MAX;
        int bmin = INT_MAX;
        for(int i=0;i<n;++i){
            cin >> a[i];
            amin = min(a[i], amin);
        }
        for(int i=0;i<n;++i){
            cin >> b[i];
            bmin = min(b[i], bmin);
        }
        long long int res = 0;
        for (int i=0;i<n;++i){
            int adif = a[i] - amin;
            int bdif = b[i] - bmin;
            int c = min(adif, bdif);
            adif -= c;
            bdif -= c;
            res += c;
            res += adif;
            res += bdif;
        }
        cout << res << endl;
    }
}