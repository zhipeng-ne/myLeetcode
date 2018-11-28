#include <iostream>
#include <vector>
using namespace std;
struct ListNode
{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};
ListNode* createListNode(vector<int>& nums)
{
        ListNode* dummyRoot = new ListNode(0);
        ListNode* ptr = dummyRoot;
        for (int item : nums)
        {
                ptr->next = new ListNode(item);
                ptr = ptr->next;
        }
        ptr = dummyRoot->next;
        delete dummyRoot;
        return ptr;
}
ListNode* partition1(ListNode* head, int x)
{
        ListNode* p = head;
        ListNode* q = head;
        while (q != nullptr)
        {
                if (q->val < x)
                {
                        swap(q->val, p->val);
                        p = p->next;
                }
                q = q->next;
        }
        return head;
}
ListNode* partition(ListNode* head, int x)
{
        if(head==nullptr||head->next==nullptr)
            return head;
        ListNode* newHead = new ListNode(0);
        newHead->next = head;
        ListNode* pPre = newHead;
        ListNode* p = head;

        ListNode* qPre = newHead;
        ListNode* q = head;

        while (q != nullptr)
        {
                if (q->val < x && p != q )
                {
                        while (p!=nullptr&&p->val < x)
                        {
                                p = p->next;
                                pPre = pPre->next;
                        }
                        qPre->next = q->next;
                        pPre->next = q;
                        q->next = p;
                        q = qPre->next;
                        p = pPre->next;
                }
                else
                {
                        if(p!=nullptr&&p->val < x)
                        {
                                p = p->next;
                                pPre = pPre->next;
                        }
                        q = q->next;
                        qPre = qPre->next;
                }

        }
        pPre= newHead->next;
        delete newHead;
        return pPre;
}
int main()
{
        vector<int> nums = {1,2,3,4};
        ListNode* head = createListNode(nums);
        ListNode* newList = partition(head, 5);
        while (newList != nullptr)
        {
                cout << newList->val << " ";
                newList=newList->next;
        }
        return 0;
}
