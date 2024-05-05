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
    
    int num, total;
    double a, b, c;
    for (int i = 0; i < N; i++)
    {
        cin >> num >> a >> b >> c;

        total = a + b + c;
        if(a / 35.0 * 100.0 >= 30 && b / 25.0 * 100.0 >= 30 && c / 40.0 * 100.0 >= 30 && total / 100.0 * 100.0 >= 55)
        {
            cout << num << " " << total << " PASS" << endl;
        }
        else
        {
            cout << num << " " << total << " FAIL" << endl;
        }
    }

    return 0;
}