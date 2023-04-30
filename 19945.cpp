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
    
    int N;
    cin >> N;

    if(N == 0) {
        cout << 1 << endl;
        return 0;
    }

    if(N < 0) {
        cout << 32 << endl;
        return 0;
    }

    bitset<32> bs(N);
    string s = bs.to_string();

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '1') {
            cout << s.length() - i << endl;
            break;
        }
    }
    
    return 0;
}