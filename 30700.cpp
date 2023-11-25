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

    string str;
    cin >> str;

    char arr[5] = {'K', 'O', 'R', 'E', 'A'};

    int idx = 0, res = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == arr[idx])
        {
            idx += 1;
            idx %= 5;
            res += 1;
        }
    }

    cout << res << endl;

    return 0;
}