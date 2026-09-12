#include <bits/stdc++.h>
using namespace std;
int romanToInt(string s)
{
    int ans = 0;
    unordered_map<char, int> Roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (Roman[s[i]] < Roman[s[i + 1]])
        {
            ans -= Roman[s[i]];
        }
        else
        {
            ans += Roman[s[i]];
        }
    }
    return ans + Roman[s.back()];
}
int main(){
    string R = "DXXVII";
    cout << romanToInt(R) << endl;
    return 0;
}