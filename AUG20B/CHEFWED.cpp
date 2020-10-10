#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        set<int, greater<int> > st;
        for (int i=0;i<n;++i){
            cin >> arr[i];
        }
    }
    return 0;
}

/*

1212
121 2 -> 1fight + 2tables
12 12 -> 0fight + 2tables
1212 -> 2fight + 1table

121
12 1 -> 0fight + 2tables = 2
121 -> 1fight + 1table = 2

==> We can let k-1 fights to happen before going to a new table coz it will be more expensive

5 14
1 4 2 4 4
*/