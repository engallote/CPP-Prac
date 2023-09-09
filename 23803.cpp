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

    int len = N * 5;
    int row = len - N;
    
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << "@";
        }
        cout << endl;
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < len; j++)
        {
            cout << "@";
        }
        cout << endl;
    }
    
    return 0;
}