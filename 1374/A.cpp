#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,n;
        cin >> x >> y >> n;
        if (n%x == y) cout << n << endl;
        else if (n%x > y){
            int diff = n%x - y;
            cout << n - diff << endl;
        }
        else {
            int diff = n%x - y + x;
            cout << n-diff << endl;
        }
    }
}