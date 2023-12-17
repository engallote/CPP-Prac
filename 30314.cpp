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

    string str1, str2;
    cin >> str1 >> str2;

    int res = 0;
    for(int i = 0; i < N; i++)
    {
        int o1 = str1[i] - 'A', o2 = str2[i] - 'A';
        int dist = abs(o1 - o2);

        if(o1 + (26 - o2) < dist)
        {
            dist = o1 + (26 - o2);
        }
        else if((26 - o1) + o2 < dist)
        {
            dist = (26 - o1) + o2;
        }

        res += dist;
    }

    cout << res << endl;

    return 0;
}