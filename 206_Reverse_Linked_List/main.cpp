#include <iostream>

using namespace std;

struct ListNode
{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};
ListNode* reverseList(ListNode* head)
{
        if(head==nullptr||head->next==nullptr)
                return head;
        ListNode* p=head;
        ListNode* q = nullptr;
        while(p!=nullptr)
        {
                ListNode* tmp = p->next;

                p->next = q;
                q=p;
                p=tmp;
        }
        return q;
}
int main()
{

        return 0;
}
