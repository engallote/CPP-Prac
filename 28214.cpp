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

    int N, K, P;
    cin >> N >> K >> P;

    int y = 0, n = 0, num, res = 0, cnt = 0;
    for(int i = 0; i < N * K; i++)
    {
        cin >> num;

        if(num == 0)
        {
            n += 1;
        }
        else
        {
            y += 1;
        }

        cnt += 1;

        if(cnt == K)
        {
            if(n < P)
            {
                res += 1;
            }

            y = 0;
            n = 0;
            cnt = 0;
        }
    }

    cout << res << endl;

    return 0;
}