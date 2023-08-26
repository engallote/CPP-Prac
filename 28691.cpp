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

    string s;
    cin >> s;

    string res = "";
    if(s == "M")
    {
        res = "MatKor";
    }
    else if(s == "W")
    {
        res = "WiCys";
    }
    else if(s == "C")
    {
        res = "CyKor";
    }
    else if(s == "A")
    {
        res = "AlKor";
    }
    else
    {
        res = "$clear";
    }

    cout << res << endl;
    
    return 0;
}