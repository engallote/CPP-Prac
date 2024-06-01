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

    int N, a, b, c;
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        cin >> a >> b >> c;
        cout << a << " " << b << " " << c << endl;
        
        if(a >= 10 && b >= 10 && c >= 10)
        {
            cout << "triple-double" << endl;
        }
        else if((a >= 10 && b >= 10) || (a >= 10 && c >= 10) || (b >= 10 && c >= 10))
        {
            cout << "double-double" << endl;
        }
        else if(a >= 10 || b >= 10 || c >= 10)
        {
            cout << "double" << endl;
        }
        else
        {
            cout << "zilch" << endl;
        }
        cout << endl;
    }
    return 0;
}