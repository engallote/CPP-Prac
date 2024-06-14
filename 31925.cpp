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

    string name, sch, win;
    int S, A;
    vector<pair<string, int>> v;

    for(int i = 1; i <= N; i++)
    {
        cin >> name >> sch >> win >> S >> A;
        
        if(sch.compare("hewhak") == 0 || win.compare("winner") == 0 || (0 <= S && S <= 3)) continue;
        v.push_back(make_pair(name, A));
    }

    sort(v.begin(), v.end(), comp);

    int size = v.size();
    cout << min(size, 10) << endl;

    vector<string> v2;
    for(int i = 0; i < min(size, 10); i++)
    {
        v2.push_back(v[i].first);
    }

    sort(v2.begin(), v2.end());

    for(int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << endl;
    }
    return 0;
}