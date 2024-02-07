#include <bits/stdc++.h>
using namespace std;

int BSearch(int arr[], int left, int right, int x)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int num;
    int output;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    cout << "Please enter an element to search" << endl;
    cin >> num;

    output = BSearch(arr, 0, 9, num);

    if (output == -1)
    {
        cout << "No Match Found" << endl;
    }
    else
    {
        cout << "Match found at position: " << output << endl;
    }

    return 0;
}
