#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <cmath>
#include <bitset>
#include <cstdlib>
using namespace std;

int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int A, B, res;
    while(true) {
        cin >> A >> B;

        if(A == -1 && B == -1) break;

        if(A == 1 || B == 1) cout << A << "+" << B << "=" << (A + B) << endl;
        else cout << A << "+" << B << "!=" << (A + B) << endl;
    }

    return 0;
}