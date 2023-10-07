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
    
    int res = 0, cnt = 0;
    int x;
    for(int i = 0; i < N; i++)
    {
        cin >> x;

        if(x == 0)
        {
            res = max(res, cnt);
            cnt = 0;
        }
        else
        {
            cnt += 1;
        }
    }

    res = max(res, cnt);
    
    cout << res;
    
    return 0;
}