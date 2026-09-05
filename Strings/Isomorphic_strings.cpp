#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
    int v1[256] = {0};
    int v2[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        if (v1[s[i]] != v2[t[i]])
            return false;
        v1[s[i]] = i + 1;
        v2[t[i]] = i + 1;
    }
    return true;
}
int main(){
    string s = "egg";
    string t = "add";
    cout << isIsomorphic(s,t) << endl;
    return 0;
}