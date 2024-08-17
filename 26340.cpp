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

    int a, b, c;
    for(int i = 0; i < N; i++)
    {
        cin >> a >> b >> c;
        int A = a, B = b, C = c;

        for(int j = 0; j < c; j++)
        {
            if(a > b)
            {
                a /= 2;
            }
            else
            {
                b /= 2;
            }
        }

        cout << "Data set: " << A << " " << B << " " << C << endl;
        cout << max(a, b) << " " << min(a, b) << endl;
        cout << endl;
    }

    return 0;
}