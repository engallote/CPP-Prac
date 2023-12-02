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

    int N, M, K, S;
    cin >> N;

    bool arr[500] = {false};
    for(int i = 0; i < N; i++)
    {
        char n;
        cin >> n;
        arr[n] = true;
    }

    cin >> M;
    for(int i = 0; i < M; i++)
    {
        char n;
        cin >> n;
        arr[n] = true;
    }

    cin >> K;
    for(int i = 0; i < K; i++)
    {
        char n;
        cin >> n;
        arr[n] = false;
    }

    string str;
    cin >> S;
    cin.ignore();
    getline(cin, str);

    char pre = ' ';
    for(int i = 0; i < S; i++)
    {
        if(arr[str[i]] || str[i] == ' ')
        {
            if(pre == ' ')
            {
                continue;
            }
            pre = ' ';
            cout << endl;
            continue;
        }
        cout << str[i];
        pre = str[i];
    }

    return 0;
}