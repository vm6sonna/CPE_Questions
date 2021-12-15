#include <iostream>
#include <vector>
#include <iomanip> // i/o 輸入輸出的格式操控
/*
有多組測試資料，以EOF結尾。
輸入的第一行是一個正整數N (3<=N<=200)，表示平面上有多少野人。
接下來有N行，每行兩個整數，其中第k行代表第k個野人所在的座標 (Xk,Yk)。
*/
using namespace std;

struct Point
{
    int x, y;

    Point()
    {
        x = 0;
        y = 0;
    }
    // 有參數的建構子
    Point(double _x, double _y)
    {
        x = _x;
        y = _y;
    }
    // cross
    double operator%(Point &v)
    {
        return x * v.y - y * v.x;
    }
    Point operator*(double &v)
    {
        return {x * v, y * v}; // return Point(x*v, y*v); // 正統作法
    }
    Point operator-(Point v)
    {
        return {x - v.x, y - v.y};
    }
};

double findTriangularArea(Point a, Point b, Point c)
{
    Point u = c - a;
    Point v = b - a;
    double cross = u % v;
    return abs(cross * 0.5); //abs(0.5*cross); 不行 因operator* double要在右邊
}

int main()
{
    int n;
    while (cin >> n)
    {
        double ans = 0.;
        vector<Point> p(n); // p[i]=(p[i].x, p[i].y);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i].x >> p[i].y;
        }
        // 找最大三角形
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    ans = max(ans, findTriangularArea(p[i], p[j], p[k]));
                }
            }
        }
        // setprecision 之後要加fixed；http://www.cplusplus.com/reference/iomanip/setprecision/
        cout << setprecision(2) << fixed << ans << '\n';
    }

    return 0;
}