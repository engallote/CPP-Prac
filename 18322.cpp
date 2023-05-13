#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <bitset>
#include <cstdlib>
using namespace std;


int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, K;
    cin >> N >> K;
    
    string s[N];
    for(int i = 0; i < N; i++) cin >> s[i];

    int cur = 0, pre = 0;
    for(int i = 0; i < N; i++) {
        if(cur + s[i].length() <= K) {
            cur += s[i].length();
            continue;
        }
        else {
            for(int j = pre; j < i; j++) {
                cout << s[j];
                if(j != i - 1) cout << " ";
            }
            cout << endl;
            pre = i;
            cur = s[i].length();
        }
    }
    for(int j = pre; j < N; j++) {
        cout << s[j];
        if(j != N - 1) cout << " ";
    }
    cout << endl;

    return 0;
}