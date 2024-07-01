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

    string a = "";
    string b = "";
    string s = "";
    for(int i = 0; i < N; i++)
    {
        cin >> s;
        a += s;
    }

    for(int i = 0; i < N; i++)
    {
        cin >> s;
        b += s;
    }

    long long res = min(stoll(a), stoll(b));
    cout << res << endl;

    return 0;
}