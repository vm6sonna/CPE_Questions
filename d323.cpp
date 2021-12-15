#include <iostream>
#include <vector>
#include <algorithm>

//https://www.cplusplus.com/reference/algorithm/sort/?kw=sort

using namespace std;

int main()
{
    int n;
    cin >> n; // cin 水管，把水管的資料放入>> 某個變數。 cout 與之相反。
    vector<int> vec(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end()); // &vec[0]==vec.begin() [iterator = C++ STL版本的pointer]

    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";
}