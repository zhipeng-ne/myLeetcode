#include <iostream>

using namespace std;
struct ListNode
{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeElements(ListNode* head, int val)
{
        ListNode* new_head = new ListNode(val+1);
        new_head -> next = head;
        ListNode* pre = new_head;
        while (pre->next != nullptr)
        {
                ListNode* cur = pre->next;
                if (cur->val == val)
                {
                        pre->next = cur->next;
                }
                else
                {
                        pre = pre->next;
                }

        }
        return new_head->next;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
