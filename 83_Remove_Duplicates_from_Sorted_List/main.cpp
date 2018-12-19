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
        if(head==nullptr||head->next==nullptr)
                return head;
        ListNode* p = head;
        ListNode* q = p->next;
        while(q!=nullptr)
        {
                if(p->val==q->val)
                {
                        p->next= q->next;
                        q= p->next;
                }
                else
                {
                        p=p->next;
                        q=q->next;
                }

        }
        return head;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
