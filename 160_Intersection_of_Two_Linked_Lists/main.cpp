#include <iostream>
#include <stack>
using namespace std;
struct ListNode
{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
        if (headA == nullptr || headB == nullptr)
                return nullptr;
        stack<ListNode*> stackA;
        stack<ListNode*> stackB;
        while (headA != nullptr)
        {
                stackA.push(headA);
                headA = headA->next;
        }
        while (headB != nullptr)
        {
                stackB.push(headB);
                headB = headB->next;
        }
        ListNode* p = stackA.top();
        ListNode* q = stackB.top();
        if (p != q)
                return nullptr;
        while (!stackA.empty() && !stackB.empty() && stackA.top() == stackB.top())
        {
                p = stackA.top();
                q = stackB.top();
                stackA.pop();
                stackB.pop();
        }
        return p == q ? p : nullptr;
}
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
        ListNode* p = headA;
        ListNode* q = headB;
        bool isA = false, isB = false;
        while (p != nullptr && q != nullptr)
        {
                if (p == q)
                        return p;
                if (p->next == nullptr && !isA)
                {
                        p = headB;
                        isA = true;
                        q = q->next;
                }
                else if (q->next == nullptr && !isB)
                {
                        q = headA;
                        isB = true;
                        p = p->next;
                }
                else
                {
                        p = p->next;
                        q = q->next;
                }
        }
        return nullptr;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
