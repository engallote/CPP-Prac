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

    int N, D;
    cin >> N >> D;

    char arr[4][2] = {{'q', 'b'}, {'p', 'd'}, {'d', 'p'}, {'b', 'q'}};

    string s;
    for(int i = 0; i < N; i++)
    {
        cin >> s;
        for(int j = 0; j < N; j++)
        {
            if(s[j] == 'd')
            {
                cout << arr[0][D - 1];
            }
            else if(s[j] == 'b')
            {
                cout << arr[1][D - 1];
            }
            else if(s[j] == 'q')
            {
                cout << arr[2][D - 1];
            }
            else
            {
                cout << arr[3][D - 1];
            }
        }
        cout << endl;
    }

    return 0;
}