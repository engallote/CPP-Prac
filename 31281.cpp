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

    long long a, b, c;
    cin >> a >> b >> c;

    vector<long long> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    
    sort(v.begin(), v.end());
    
    cout << v[1] << endl;

    return 0;
}