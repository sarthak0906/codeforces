#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        vector<int> arr;
        s.push_back('0');
        int cnt = 0;
        for (int i=0;i<s.size();++i){
            if (s[i] == '0' && cnt){
                arr.push_back(cnt);
                cnt = 0;
            }
            if (s[i] == '1') cnt++;
        }
        sort(arr.begin(), arr.end(), greater<int>());
        int res = 0;
        for (int i=0;i<arr.size();++i){
            if (i%2 == 0) res+= arr[i];
        }
        cout  << res << endl;
    }
    return 0;
}