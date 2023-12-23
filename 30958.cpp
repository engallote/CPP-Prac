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
    cin.ignore();
    
    string str;
    getline(cin, str);

    int arr[26] = {0};

    for (int i = 0; i < N; i++)
    {
        if (str[i] == ',' || str[i] == '.' || str[i] == ' ')
        {
            continue;
        }

        arr[str[i] - 'a'] += 1;
    }

    sort(arr, arr + 26);

    cout << arr[25] << endl;

    return 0;
}