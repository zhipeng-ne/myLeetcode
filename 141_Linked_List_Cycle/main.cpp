#include <iostream>

using namespace std;
struct ListNode
{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};
bool hasCycle(ListNode *head)
{
        if (head == nullptr)
                return false;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr)
        {
                slow = slow->next;

                fast = fast->next->next;
                if (fast == slow)
                        return true;
        }
        return false;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
