#include <iostream>
#include <stack>
using namespace std;
class MyQueue
{
private:
        stack<int> stack1;
        stack<int> stack2;
public:
        /** Initialize your data structure here. */
        MyQueue()
        {

        }

        /** Push element x to the back of queue. */
        void push(int x)
        {
                stack1.push(x);
        }

        /** Removes the element from in front of queue and returns that element. */
        int pop()
        {
                int tmp = peek();
                stack2.pop();
                return tmp;
        }

        /** Get the front element. */
        int peek()
        {
                if (stack2.empty())
                {
                        while (!stack1.empty())
                        {
                                stack2.push(stack1.top());
                                stack1.pop();
                        }
                }
                return stack2.top();
        }

        /** Returns whether the queue is empty. */
        bool empty()
        {
                return stack1.empty() && stack2.empty();
        }
};
class Queue
{
public:
        stack<int> s;

        // Push element x to the back of queue.
        void push(int x)
        {
                pushHelper(x);
        }
        void pushHelper(int x)
        {
                if (s.size() == 0)
                {
                        s.push(x);
                        return;
                }
                int data;
                data = s.top();
                s.pop();
                pushHelper(x);
                s.push(data);
                return;

        }

        // Removes the element from in front of queue.
        void pop(void)
        {
                s.pop();
        }

        // Get the front element.
        int peek(void)
        {
                return s.top();
        }

        // Return whether the queue is empty.
        bool empty(void)
        {
                return (s.size() == 0);
        }
};
public void push(int x)
{
        Stack<Integer> temp = new Stack<Integer>();
        while (!queue.empty())
        {
                temp.push(queue.pop());
        }
        queue.push(x);
        while (!temp.empty())
        {
                queue.push(temp.pop());
        }
}
int main()
{
        MyQueue *que = new MyQueue();
        return 0;
}
