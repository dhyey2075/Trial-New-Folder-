#include <bits/stdc++.h>
#include <climits>
using namespace std;
void selection_sort(int arr[], int n)
{
    int minidx = INT_MAX;
    int mn;
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        mn = INT_MAX;
        for (j = i; j < n; j++)
        {
            mn = min(mn, arr[j]);
            if (arr[j] == mn)
            {
                minidx = j;
            }
        }
        swap(arr[i], arr[minidx]);
    }
}
int main()
{
    int arr[] = {7, 34, 12, 55, 10};
    selection_sort(arr, 5);
    for (int k = 0; k < 5; k++)
    {
        cout << arr[k] << " ";
    }
}