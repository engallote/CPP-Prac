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

    int h, m;
    cin >> h >> m;

    string time[21] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve",
                       "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
    
    if(m == 60)
    {
        m = 0;
        h += 1;
        if(h == 13)
        {
            h = 1;
        }
    }

    if (m == 0)
    {
        cout << time[h] << " o' clock" << endl;
    }
    else if (m <= 30)
    {
        if (m == 1)
        {
            cout << "one minute past " << time[h] << endl;
        }
        else if (m == 15)
        {
            cout << "quarter past " << time[h] << endl;
        }
        else if (m == 30)
        {
            cout << "half past " << time[h] << endl;
        }
        else
        {
            if (m <= 20)
            {
                cout << time[m] << " minutes past " << time[h] << endl;
            }
            else
            {
                int a = m / 10 * 10, b = m % 10;
                if (b == 0)
                {
                    cout << time[m] << " minutes past " << time[h] << endl;
                }
                else
                {
                    cout << time[a] << " " << time[b] << " minutes past " << time[h] << endl;
                }
            }
        }
    }
    else
    {
        int hh = 0;
        if (h == 12)
        {
            hh = 1;
        }
        else
        {
            hh = h + 1;
        }
        if (m == 45)
        {
            cout << "quarter to " << time[hh] << endl;
        }
        else if (m == 59)
        {
            cout << "one minute to " << time[hh] << endl;
        }
        else
        {
            int a = (60 - m) / 10 * 10, b = (60 - m) % 10;
            if (60 - m <= 20)
            {
                cout << time[60 - m] << " minutes to " << time[hh] << endl;
            }
            else
            {
                cout << time[a] << " " << time[b] << " minutes to " << time[hh] << endl;
            }
        }
    }

    return 0;
}