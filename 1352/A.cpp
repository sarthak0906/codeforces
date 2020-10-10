#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string res = "";
        int res1 = 0;
        int mul = 1;
        while(n){
            int a = n%10;
            a *= mul;
            n /= 10;
            mul *= 10;
            if (a != 0) res += to_string(a) + " ", res1++;
        }
        cout << res1 << endl;
        cout << res << endl;
    }
}