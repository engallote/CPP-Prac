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

    int T;
    cin >> T;
    string arr[15] = {"VVVµþ±â", "VVµþ±âV", "VVµþ±âµþ±â", "Vµþ±âVV", "Vµþ±âVµþ±â", "Vµþ±âµþ±âV",
                      "Vµþ±âµþ±âµþ±â", "µþ±âVVV", "µþ±âVVµþ±â", "µþ±âVµþ±âV", "µþ±âVµþ±âµþ±â",
                      "µþ±âµþ±âVV", "µþ±âµþ±âVµþ±â", "µþ±âµþ±âµþ±âV", "µþ±âµþ±âµþ±âµþ±â"};

    int N;
    for (int t = 0; t < T; t++)
    {
        cin >> N;
        
        N -= 1;
        N %= 28;
        N += 1;

        if(N <= 15)
        {
            cout << arr[N - 1] << endl;
        }
        else
        {
            cout << arr[30 - N - 1] << endl;
        }
    }
    return 0;
}