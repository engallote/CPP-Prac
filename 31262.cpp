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
using namespace std;

int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    vector<int> num;
    vector<char> c;
    for(int i = 0; i < str.size(); i++)
    {
        if('0' <= str[i] && str[i] <= '9')
        {
            num.push_back(str[i] - '0');
        }
        else
        {
            c.push_back(str[i]);
        }
    }

    sort(num.rbegin(), num.rend());
    sort(c.begin(), c.end());

    int idx = 0;
    while(idx < num.size())
    {
        cout << c[idx] << num[idx];
        idx += 1;
    }

    return 0;
}