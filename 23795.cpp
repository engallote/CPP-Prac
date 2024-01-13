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
#include <sstream>
using namespace std;

int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int N;
    // cin >> N;

    int res = 0, n = 0;
    while(true)
    {
        cin >> n;

        if(n == -1)
        {
            break;
        }
        
        res += n;
    }

    cout << res << endl;

    return 0;
}