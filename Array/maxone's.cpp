#include <iostream>
using namespace std;
void findMaxConsecutiveOnes(int a[] , int n)
{
    int count = 0;
    int maxx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            count++;
            maxx = max(maxx, count);
        }
        else
            count = 0;
    }
    cout << "maxx";
}
int main(){
    int n;
    cout << "enter size of array ";
    cin >> n;
    int a[n];
    cout << "enter elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    findMaxConsecutiveOnes(a,n);
}