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


bool comp(const pair<string, int> &a, const pair<string, int> &b)
{
    return a.second < b.second;
}
int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    double a, b, res;
    for(int i = 0; i < N; i++)
    {
        cin >> a >> b;

        if(a >= 0 && b >= 0)
        {
            res = max(a, b) - min(a, b);
        }
        else if(a >= 0 && b < 0)
        {
            res = a - b;
        }
        else if(a < 0 && b >= 0)
        {
            res = b - a;
        }
        else {
            res = abs(min(a, b) - max(a, b));
        }

        cout << fixed;
        cout.precision(1);
        cout << res << endl;
    }

    return 0;
}