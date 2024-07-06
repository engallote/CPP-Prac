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


bool comp(const pair<string, int> &a, const pair<string, int> &b)
{
    return a.second < b.second;
}
int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int res = 0;
    string str = "";
    for(int i = 0; i < N; i++)
    {
        cin >> str;
        
        res = 0;
        for(int j = 0; j < str.length(); j++)
        {
            if(str[j] == 'D')
            {
                break;
            }
            res += 1;
        }

        cout << res << endl;
    }

    return 0;
}