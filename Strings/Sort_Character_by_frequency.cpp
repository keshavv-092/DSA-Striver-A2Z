#include <bits/stdc++.h>
using namespace std;
static bool SortString(pair<int, char> p1, pair<int, char> p2)
{
    if (p1.first > p2.first)
        return true;
    if (p1.first < p2.first)
        return false;
    return p1.second < p2.second;
}
string frequencySort(string s)
{
    unordered_map<char, int> counts;
    for (char c : s)
    {
        counts[c]++;
    }
    vector<pair<int, char>> freq;
    for (auto &pair : counts)
    {
        freq.push_back({pair.second, pair.first});
    }
    sort(freq.begin(), freq.end(), SortString);
    string ans;
    for (const auto &p : freq)
    {
        ans.append(p.first, p.second);
    }

    return ans;
}
int main(){
    string s = "tree";
    cout << frequencySort(s) << endl;
    return 0;
}