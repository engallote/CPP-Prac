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

    int a, b, c;
    cin >> a >> b >> c;
    
    if(a == b + c || b == a + c || c == a + b || a == b || a == c || b == c)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
    return 0;
}