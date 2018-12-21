#include <iostream>

using namespace std;
struct ListNode
{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};
ListNode *detectCycle(ListNode *head)
{
        if (head == nullptr)
                return nullptr;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr)
        {
                slow = slow->next;

                fast = fast->next->next;
                if (fast == slow)
                        break;
        }
        if (fast->next == nullptr || fast->next->next == nullptr)
                return nullptr;

        fast = head;
        while (fast != slow)
        {
                slow = slow->next;
                fast = fast->next;
        }
        return slow;
}
ListNode *detectCycle(ListNode *head)
{
        if (!head || !head->next) return nullptr;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next)
        {
                slow = slow->next;
                fast = fast->next->next;
                if (slow == fast)
                {
                        while (slow != head)
                        {
                                head = head->next;
                                slow = slow->next;
                        }
                        return slow;
                }
        }
        return nullptr;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
