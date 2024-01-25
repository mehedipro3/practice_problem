#include<bits/stdc++.h>
using namespace std;
int main()
{
   char t[100],p[100];
    cin >> t >> p;
    int tss=strlen(t);
    int pss = strlen(p);
    int ans = (tss-pss)+1;
    cout << ans ;
}
