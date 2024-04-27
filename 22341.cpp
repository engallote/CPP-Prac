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
#include <regex>
using namespace std;


int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, C;
    cin >> N >> C;
    
    int x, y, r = N, c = N;
    for (int i = 0; i < C; i++)
    {
        cin >> x >> y;

        if (x >= r || y >= c)
        {
            continue;
        }

        int a = r * y;
        int b = x * c;

        if(a > b)
        {
            c = y;
        }
        else
        {
            r = x;
        }
    }

    cout << r * c << endl;

    return 0;
}