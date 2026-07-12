#include <bits/stdc++.h>
using namespace std;
void bubblesort(int a[], int n)
{
    int didSwap;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
                didSwap =1;
            }
        }
        if(didSwap==0){
            break;
        }
    }
}
int main()
{
    int n;
    cout << "enter size of array ";
    cin >> n;
    int a[n];
    cout << "enter elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubblesort(a, n);
    cout << "sorted array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}