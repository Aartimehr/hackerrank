#include<bits/stdc++.h>
using namespace std;
int maxlen[26] = {};

int main(){
    string s;
    cin >> s;
    int len = s.size();
    int i = 0;
    while (i < len) {
        int j = i;
        while (j < len && s[i] == s[j]) j++;
        maxlen[s[i] - 'a'] = max(maxlen[s[i] - 'a'], j - i);
        i = j;
    }

    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        bool poss = false;
        for (i = 0; i < 26; i++) {
            if (x % (i + 1) == 0) {
                int y = x / (i + 1);
                poss |= (y <= maxlen[i]);
            }
        }
        cout << (poss ? "Yes" : "No") << endl;
    }
    return 0;
}
