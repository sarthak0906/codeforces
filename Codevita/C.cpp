#include<bits/stdc++.h>

using namespace std;

bool v(char s){
    switch(s){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': return true;
    }
    return false;
}

int vow(string a){
    int res = 0;
    for (auto i:a){
        if (v(i)) res ++;
    }
    return res;
}

vector<string> names {
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
    "ten",
    "eleven",
    "twelve",
    "thirteen",
    "fourteen",
    "fifteen",
    "sixteen",
    "seventeen",
    "eighteen",
    "nineteen",
    "twenty",
    "twenty one",
    "twenty two",
    "twenty three",
    "twenty four",
    "twenty five",
    "twenty six",
    "twenty seven",
    "twenty eight",
    "twenty nine",
    "thirty",
    "thirty one",
    "thirty two",
    "thirty three",
    "thirty four",
    "thirty five",
    "thirty six",
    "thirty seven",
    "thirty eight",
    "thirty nine",
    "forty",
    "forty one",
    "forty two",
    "forty three",
    "forty four",
    "forty five",
    "forty six",
    "forty seven",
    "forty eight",
    "forty nine",
    "fifty",
    "fifty one",
    "fifty two",
    "fifty three",
    "fifty four",
    "fifty five",
    "fifty six",
    "fifty seven",
    "fifty eight",
    "fifty nine",
    "sixty",
    "sixty one",
    "sixty two",
    "sixty three",
    "sixty four",
    "sixty five",
    "sixty six",
    "sixty seven",
    "sixty eight",
    "sixty nine",
    "seventy",
    "seventy one",
    "seventy two",
    "seventy three",
    "seventy four",
    "seventy five",
    "seventy six",
    "seventy seven",
    "seventy eight",
    "seventy nine",
    "eighty",
    "eighty one",
    "eighty two",
    "eighty three",
    "eighty four",
    "eighty five",
    "eighty six",
    "eighty seven",
    "eighty eight",
    "eighty nine",
    "ninety",
    "ninety one",
    "ninety two",
    "ninety three",
    "ninety four",
    "ninety five",
    "ninety six",
    "ninety seven",
    "ninety eight",
    "ninety nine",
    "hundred"
};

vector<pair<int, int> > pair_sum(int d, vector<int> ls){
    vector<pair<int, int> > res;
    while(ls.size()){
        int num = ls.back();
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;++i) cin >> arr[i];
    int d = 0;
    for (int i=0;i<n;++i){
        d += vow(names[i]);
    }
    cout << pair_sum(d, arr);
    return 0;
}