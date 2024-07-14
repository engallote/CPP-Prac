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

    int N, M;
    cin >> N >> M;

    int num = N * M;
    int div = num / 4840, mod = num % 4840;

    if(mod > 0)
    {
        mod = 1;
    }

    div += mod;

    int div2 = div / 5, mod2 = div % 5;
    if(mod2 > 0)
    {
        mod2 = 1;
    }

    cout << div2 + mod2 << endl;

    return 0;
}