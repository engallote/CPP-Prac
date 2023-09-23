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

bool sorting(string a, string b)
{
    if(a.length() != b.length()) return a.length() < b.length();
    else return a < b;
}


int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    cin.ignore();

    string s;
    vector<string> v, link;
    for(int i = 0; i < N; i++)
    {
        getline(cin, s);
        
        if(s.find("boj.kr/") != std::string::npos)
        {
            link.push_back(s);
        }
        else
        {
            v.push_back(s);
        }
    }

    sort(v.begin(), v.end(), sorting);
    sort(link.begin(), link.end(), sorting);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    for(int i = 0; i < link.size(); i++)
    {
        cout << link[i] << endl;
    }
    
    return 0;
}