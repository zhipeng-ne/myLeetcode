#include <iostream>

using namespace std;
struct ListNode
{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
        if(l1==nullptr||l2==nullptr)
                return l1?l1:l2;
        ListNode* p1 = l1;

        ListNode* p2 = l2;
        int carry = 0;
        int sum = 0;
        while (p1 != nullptr && p2 != nullptr)
        {
                sum = p1->val + p2->val + carry;
                carry = sum / 10;
                p1->val = sum % 10;

                if(p1->next==nullptr&&p2->next!=nullptr)
                {
                        p1->next=p2->next;
                        p2->next = nullptr;
                }
                else if(p1->next==nullptr&&carry>0)
                {
                        p1->next=new ListNode(carry);
                        carry=0;
                        p1 =p1->next;
                        break;
                }
                p1 = p1->next;
                p2 = p2->next;
        }

        while (p1 != nullptr)
        {
               sum = p1->val + carry;
                carry = sum / 10;
                p1->val = sum % 10;
                if(p1->next==nullptr&&carry>0)
                {
                        p1->next=new ListNode(carry);
                        break;
                }
                p1=p1->next;
        }
        return l1;

}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
