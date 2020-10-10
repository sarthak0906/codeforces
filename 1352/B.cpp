#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if (n%2 == 1 && k%2 == 0){
            cout << "NO\n";
        }
        else if (k > n){
            cout << "NO\n";
        }
        else if (n%2 == k%2){
            cout << "YES\n";
            for (int i=0;i<k-1;++i){
                cout << 1 << " ";
            }
            cout << long(n - k + 1) << endl;
        }
        else if (n%2 == 0){
            if ((k-1)*2 >= n){
                cout << "NO\n";
            }
            else {
                cout << "YES\n";
                for (int i=0;i<k-1;++i) cout << 2 << " ";
                cout << long(n - ((k-1)*2)) << endl;
            }
        }
        else {
            cout << "NO\n";
        }
    }
}