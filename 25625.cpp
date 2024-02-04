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

    int x, y;
    cin >> x >> y;

    if(x > y)
    {
        cout << x + y << endl;
    }
    else if(x <= y)
    {
        cout << y % x << endl;
    }

    return 0;
}