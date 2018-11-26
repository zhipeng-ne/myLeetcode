#include <iostream>

using namespace std;
struct ListNode
{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};
void deleteNode(ListNode* node)
{

        while (node->next != nullptr)
        {
                node->val = node->next->val;
                if (node->next->next == nullptr)
                {
                        node->next = nullptr
                        break;
                }
                else
                {
                        node = node->next;
                }

        }

}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
