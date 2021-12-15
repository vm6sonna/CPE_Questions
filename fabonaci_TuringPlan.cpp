#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int ans[n + 5] = {0};
    ans[0] = 1; // 0階代表1種走法。就是不走
    ans[1] = 1;
    for (int i = 2; i <= n; i++)
    {

        ans[i] = ans[i - 1] + ans[i - 2];
    }
    for (int i = 2; i < n; i++)
    {
        // cout << ans[i] << '\n';
        cout << "step:" << i << " , ans = " << ans[i] << '\n';
    }
    cout << "step:" << n << " , ans = " << ans[n] << '\n';
    cin.get(); // getch();

    return 0;
}
