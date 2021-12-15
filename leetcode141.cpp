#include <iostream>

using namespace std;
/**
 * Definition for singly-linked list.*/
struct ListNode
{
    int val;
    ListNode *next;
    // ListNode(int x) : val(x), next(NULL) {}
    // ListNode() {} // 建構子
};

ListNode *practice1()
{
    // node 1
    ListNode *front = new ListNode();
    front->val = 1;
    // node 2
    front->next = new ListNode();
    front->next->val = 2;
    // node 3
    front->next->next = new ListNode();
    front->next->next->val = 3;
    // node 4
    front->next->next->next = new ListNode();
    front->next->next->next->val = 4;
    // node 5
    front->next->next->next->next = new ListNode();
    front->next->next->next->next->val = 5;
    front->next->next->next->next->next = nullptr;

    return front;
}
ListNode *practice2(int n)
{
    ListNode *head = new ListNode();
    head->val = 1;
    ListNode *now = new ListNode();

    for (int i = 0; i < n; i++)
    {
        ListNode *tmp = new ListNode();
    }
}
void print(ListNode *front)
{
    cout << front->val << ' ';
    // ListNode *tmp1;
    // tmp1 = front->next;
    // cout << tmp->val << ' ';
    // ListNode *tmp2;
    // tmp2 = tmp1->next
    // ...
    ListNode *tmp;
    tmp = front->next;
    cout << tmp->val << ' ';
    tmp = tmp->next;
    cout << tmp->val << ' ';
    tmp = tmp->next;
    cout << tmp->val << ' ';
    tmp = tmp->next;
    cout << tmp->val << ' ';
}

void print2(ListNode *front)
{
    ListNode *now = front; //now 會移動
    while (now != nullptr)
    {
        cout << now->val << ' ';
        now = now->next; // 更新tmp
    }
}

void printRec(ListNode *front)
{
    if (front == nullptr)
        return;
    cout << front->val;
    printRec(front); // 1 2 3 4 5
}
void printRec2(ListNode *front)
{
    if (front == nullptr)
        return;
    printRec2(front);
    cout << front->val; // 5 4 3 2 1
}

int main()
{
    ListNode *nodeA = new ListNode();
    ListNode *nodeB = new ListNode();
    nodeA->val = 10;
    nodeB->val = 15;
    cout << nodeA->val << "\n";
    nodeA->next = nodeB;
    cout << nodeA->next->val << '\n';
    // practice 1:{1,2,3,4,5}
    ListNode *l1 = practice1();
    print(l1);
    cout << '\n';
    print2(l1);

    printRec(front)
    // cout << "this listnode is " << '\n';
    // practice 1:{1,2,3,4,5,....n}
}