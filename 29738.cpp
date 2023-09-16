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

    int x;
    int num = 0;
    for(int i = 1; i <= N; i++)
    {
        cin >> x;
        
        num = 0;
        if(25 < x && x <= 1000) {
            num = 3;
        }
        else if(1000 < x && x <= 4500) {
            num = 2;
        }
        else if(4500 < x)
        {
            num = 1;
        }

        cout << "Case #" << i << ": ";

        if(num > 0)
        {
            cout << "Round " << num << endl;
        }
        else
        {
            cout << "World Finals" << endl;
        }
    }
    
    return 0;
}