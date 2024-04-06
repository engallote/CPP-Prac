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

    vector<int> prime;
    bool chk[11000];

    chk[0] = chk[1] = true;
    for(int i = 2; i < 11000; i++)
    {
        if(chk[i])
        {
            continue;
        }

        prime.push_back(i);

        for(int j = i + i; j < 11000; j+=i)
        {
            chk[j] = true;
        }
    }

    int num;
    for(int i = 0; i < N; i++)
    {
        cin >> num;

        cout << "Input value: " << num << endl;
        if(chk[num])
        {
            int min = 1000000;
            for(int j = 0; j < prime.size(); j++)
            {
                if(abs(prime[j] - num) < min)
                {
                    min = abs(prime[j] - num);
                }
            }

            cout << "Missed it by that much (" << min << ")!" << endl;
        }
        else
        {
            cout << "Would you believe it; it is a prime!" << endl;
        }
        cout << endl;
    }

    return 0;
}