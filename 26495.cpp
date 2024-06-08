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

    string str;
    cin >> str;

    string arr[10] = {"0000\n0  0\n0  0\n0  0\n0000", "   1\n   1\n   1\n   1\n   1", "2222\n   2\n2222\n2\n2222"
    ,"3333\n   3\n3333\n   3\n3333", "4  4\n4  4\n4444\n   4\n   4", "5555\n5\n5555\n   5\n5555", "6666\n6\n6666\n6  6\n6666"
    ,"7777\n   7\n   7\n   7\n   7", "8888\n8  8\n8888\n8  8\n8888", "9999\n9  9\n9999\n   9\n   9"};
    
    for(int i = 0; i < str.length(); i++)
    {
        cout << arr[str[i] - '0'] << endl;
        if(i + 1 < str.length())
        {
            cout << endl;
        }
    }
    return 0;
}