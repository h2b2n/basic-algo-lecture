#include <bits/stdc++.h>
using namespace std ; 

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, t ;
    cin >> n >> x;
    while(n--)
    {
        cin >> t ;
        if(x > t) cout << t << ' ';
    }

}
