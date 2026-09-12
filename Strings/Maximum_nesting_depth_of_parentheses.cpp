#include <bits/stdc++.h>
using namespace std;
int maxDepth(string s)
{
    int p = 0;
    int ans = 0;
    for (char i : s)
    {
        if (i == '(')
            p++;
        else if (i == ')')
            p--;
        ans = max(ans, p);
    }
    return ans;
}
int main(){
    string s = "(1+(2*3)+((8)/4))+1";
    cout << maxDepth(s) << endl;
    return 0;
}