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

    int N;
    cin >> N;

    string str;
    cin >> str;

    int res = 2000000;
    int arr[200] = {0};

    for(int i = 0; i < N; i++)
    {
        arr[str[i]] += 1;
    }

    res = min(res, arr['u']);
    res = min(res, arr['o']);
    res = min(res, arr['s']);
    res = min(res, arr['p']);
    res = min(res, arr['c']);

    cout << res << endl;

    return 0;
}