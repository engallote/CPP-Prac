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

    string db, dt, mb, mt;
    cin >> db >> dt >> mb >> mt;

    vector<pair<string, string>> v;

    v.push_back(make_pair(db, db));
    v.push_back(make_pair(db, dt));
    v.push_back(make_pair(db, mb));
    v.push_back(make_pair(db, mt));
    v.push_back(make_pair(mb, mb));
    v.push_back(make_pair(mb, mt));
    v.push_back(make_pair(mb, db));
    v.push_back(make_pair(mb, dt));

    v.push_back(make_pair(dt, dt));
    v.push_back(make_pair(dt, db));
    v.push_back(make_pair(dt, mb));
    v.push_back(make_pair(dt, mt));
    v.push_back(make_pair(mt, dt));
    v.push_back(make_pair(mt, db));
    v.push_back(make_pair(mt, mb));
    v.push_back(make_pair(mt, mt));

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    
    return 0;
}