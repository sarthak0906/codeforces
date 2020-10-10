#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int n2=0, n3=0;
        while(n%2 == 0){
            n/= 2;
            n2++;
        }
        while(n%3 == 0){
            n/= 3;
            n3++;
        }
        if (n!= 1) cout << "-1\n";
        else {
            if (n2 > n3) cout << "-1\n";
            else {
                int res = n3;
                res += (n3 - n2);
                cout << res << endl;
            }
        }
    }
}