#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;

    int x;
    cin >> x;
    for(int i=0; i<=n; i++)
    {
        arr[n] = x;
    }
        // inserting..............
    for(int i=1 ; i<=n ; i++)
    {
        int k = arr[i];
        int j= i-1;
        while(j>=0 && arr[j] > k)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1]=k;
    }
    for(int i=0 ; i<=n ; i++)
        cout << arr[i] << " " ;
    cout << endl;


    int zz;
    cin >> zz;
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid_index=(l+r)/2;
        if(arr[mid_index]==zz)
        {
            break;
        }
        if(zz>arr[mid_index])
        {

            l=mid_index+1;
        }
        else
        {

            r=mid_index-1;
        }

    }
    cout << zz << endl;

    return 0;
}
