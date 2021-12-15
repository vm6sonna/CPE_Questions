#include <algorithm>
#include <iostream>

using namespace std;
struct Point
{
    int x, y;
    /* int x, y 等同 int x; int y;*/
};

bool cmp(Point a, Point b)
{
    if (a.x != b.x)
        return a.x < b.x;
    return a.y < b.y;
}

void solve(Point points[], int n)
{

    sort(points, points + n, cmp); //sort在algorithm內
}

const int MAX = 1003; //全域變數在main之外， 1<=n<=1000
// 多給一些空間避免for loop寫錯

int main()
{
    int n; // 表示要輸入n筆資料
    cin >> n;
    Point points[MAX];
    // 輸入 Array points
    for (int i = 0; i < n; i++)
        cin >> points[i].x >> points[i].y;

    solve(points, n);
    for (int i = 0; i < n; i++)
    {

        cout << points[i].x << " " << points[i].y << endl;
    }

    return 0;
}