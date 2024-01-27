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

    int N, M, L;
    cin >> N;
    cin.ignore();

    string str;
    map<string, string> mp;
    for(int i = 0; i < N; i++)
    {
        getline(cin, str);
        int idx = str.find('=');
        
        mp.insert({str.substr(0, idx - 1), str.substr(idx + 2, str.length() - 1)});
    }

    cin >> M;
    for(int i = 0; i < M; i++)
    {
        cin >> L;

        string res = "";
        for(int j = 0; j < L; j++)
        {
            cin >> str;
            res += mp[str];

            if(j < L - 1)
            {
                res += " ";
            }
        }

        cout << res << endl;
    }

    return 0;
}