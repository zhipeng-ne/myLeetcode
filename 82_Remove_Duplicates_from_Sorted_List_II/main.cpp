#include <iostream>

using namespace std;
struct ListNode
{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};
ListNode* deleteDuplicates(ListNode* head)
{
        if (head == nullptr || head->next == nullptr)
                return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* p = dummy;
        ListNode* q = head;
        while (q != nullptr)
        {
                if (q->next != nullptr && q->val == q->next->val)
                {
                        while (q->next != nullptr && q->val == q->next->val)
                        {
                                q = q->next;
                        }
                        p->next=q->next;
                        q=q->next;
                }
                else
                {
                        p = p->next;
                        q = q->next;
                }
        }
        return dummy->next;

}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
