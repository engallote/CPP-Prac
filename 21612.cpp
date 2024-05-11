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

    int N;
    cin >> N;
    
    int num = 5 * N - 400;
    
    cout << num << endl;
    if(num < 100)
    {
        cout << 1 << endl;
    }
    else if(num == 100)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}