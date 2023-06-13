#include <iostream>
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

    int P, Y;
    string name;
    vector<int> year;
    vector<pair<int, char>> v;

    for(int i = 0; i < 3; i++) {
        cin >> P >> Y >> name;

        year.push_back(Y % 100);
        v.push_back(make_pair(P, name[0]));
    }

    sort(year.begin(), year.end());
    sort(v.begin(), v.end());

    for(int i = 0; i < 3; i++) cout << year[i];
    cout << endl;
    for(int i = 2; i >= 0; i--) cout << v[i].second;
    cout << endl;

    return 0;
}