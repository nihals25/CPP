#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector < int > keyboards, vector < int > drives, int s){
    // Complete this function
    sort(keyboards.begin(), keyboards.end(), greater<int>());
    sort(drives.begin(), drives.end());
    vector<int>::iterator it1=keyboards.begin();
    int total=0, max=0;
    for(;it1!=keyboards.end();++it1) {
        vector<int>::iterator it2=drives.begin();
        for(;it2!=drives.end();++it2) {
            total = *it1 + *it2;
            if(total > s)
                break;
            if(max < total) {
                max = total;
            }    
        }        
    }
    return max==0?-1:max;
}

int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    int moneySpent = getMoneySpent(keyboards, drives, s);
    cout << moneySpent << endl;
    return 0;
}
