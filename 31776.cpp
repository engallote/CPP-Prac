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

    int a, b, c, res = 0;
    for(int i = 0; i < N; i++)
    {
        cin >> a >> b >> c;

        if(a + b + c == -3)
        {
            continue;
        }

        if(a == -1)
        {
            continue;
        }

        if((a <= b && b <= c) || (a >= 0 && b == -1 && c == -1) || (a >= 0 && a <= b && c == -1))
        {
            res += 1;
        }
    }

    cout << res << endl;

    return 0;
}