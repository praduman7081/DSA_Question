#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout << "Array size" << endl;
    cin >> n;

    int a[n + 1];
    a[n] = -1;

    cout << "Enter array's element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    int mx = -1;
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
        }

        mx = max(mx, a[i]);
    }

    cout << ans << endl;

    return 0;
}