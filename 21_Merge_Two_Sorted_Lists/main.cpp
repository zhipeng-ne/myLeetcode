#include <iostream>
#include <vector>
using namespace std;
struct ListNode
{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};
ListNode* createListNode(vector<int> &nums)
{
        // Now convert that list into linked list
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
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
        if (l1 == nullptr)
                return l2;
        if (l2 == nullptr)
                return l1;
        ListNode* dum = new ListNode(0);
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        while (p1 != nullptr && p2 != nullptr)
        {

                if (p1->val <= p2->val)
                {
                        dum->next = p1;
                        p1 = p1->next;
                }
                else
                {
                        dum->next = p2;
                        p2 = p2->next;
                }
                dum = dum->next;
        }
        if (p1 != nullptr)
        {
                dum->next = p1;
        }
        if (p2 != nullptr)
        {
                dum->next = p2;
        }
        return l1->val <= l2->val ? l1 : l2;
}
int main()
{
        vector<int> nums1 = {1, 2, 3};
        vector<int> nums2 = {5, 6, 7, 8};
        ListNode* l1 = createListNode(nums1);
        ListNode* l2 = createListNode(nums2);
        ListNode* mer = mergeTwoLists(l1, l2);
        while (mer != nullptr)
        {
                cout << mer->val << " ";
                mer = mer->next;
        }
        return 0;
}
