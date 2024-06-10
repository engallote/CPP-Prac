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

    int K;
    cin >> K;

    double n, s, d, dd;
    int res, v;
    for(int i = 1; i <= K; i++)
    {
        cin >> n >> s >> d;

        res = 0;
        for(int j = 0; j < n; j++)
        {
            cin >> dd >> v;

            if(dd / s <= d)
            {
                res += v;
            }
        }

        cout << "Data Set " << i << ":" << endl;
        cout << res << endl;
        cout << endl;
    }
    return 0;
}