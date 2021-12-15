#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>

//https://www.cplusplus.com/reference/algorithm/sort/?kw=sort
// cin 水管，把水管的資料放入>> 某個變數。 cout 與之相反。

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        stack<char> st;
        // vector<char> vec;
        string s;
        bool b = true;
        //getline: 沒給資料長度。
        cin >> s; //遇到空格 abc efg -> 只會收到abc 。 getline(cin, string s) -> abc efg
        //cin.getline(string s)
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == '(')
            {
                st.push(s[j]);
            }
            else if (s[j] == '[')
            {
                /* code */
                st.push(s[j]);
            }

            else if (s[j] == ')')
            {
                // 每次取top前要注意stack 是否為空
                if (st.size() != 0 && st.top() == '(')
                {
                    st.pop();
                }
                else
                    b = false;
            }
            else if (s[j] == ']')
            {
                // 每次取top前要注意stack 是否為空
                if (st.size() != 0 && st.top() == '[')
                {
                    st.pop();
                }
                else
                    b = false;
            }
        }
        if (b == true && st.size() == 0)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}

//WA (line:7)表示正確