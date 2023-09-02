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

    int cnt = 0;
    for(int i = 1; i <= N; i++)
    {
        cout << i << " ";
        cnt += 1;

        if(cnt == 6)
        {
            cnt = 0;
            cout << "Go! ";
        }
    }
    if(0 < cnt && cnt < 6)
    {
        cout << "Go!";
    }
    
    return 0;
}