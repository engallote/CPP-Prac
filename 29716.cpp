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

bool sorting(string a, string b)
{
    if(a.length() != b.length()) return a.length() < b.length();
    else return a < b;
}


int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int J, N;
    cin >> J >> N;
    cin.ignore();

    string s;
    int num = 0, res = 0;
    for(int i = 0; i < N; i++)
    {
        getline(cin, s);
        
        num = 0;
        for(int j = 0; j < s.length(); j++)
        {
            if(s[j] == ' ') num += 1;
            else if('A' <= s[j] && s[j] <= 'Z') num += 4;
            else num += 2;
        }

        if(num <= J) res += 1;
    }

    cout << res << endl;
    
    return 0;
}