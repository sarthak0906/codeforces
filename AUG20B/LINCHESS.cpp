#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, k;
        cin >> n >> k;

        long long int min = INT_MAX, val = -1;
        for (long long int i=0;i<n;++i){
            long long int a;
            cin >> a;
            if (k%a == 0){
                if (k/a < min){
                    min = k/a;
                    val = a;
                }
            }
        }
        cout << val << endl;
    }
    return 0;
}