# myLeetcode
刷题，记录一下
## 11.26
### [1. Two Sum][1]
> **使用map来保存遍历过的数字，遍历到下一个数字时，在map中找有没有要的结果**
### [1. 3 Sum][2]
> **遍历数组，在遍历数字之后找结果，需要先将数组排序，因为不能出现重复的结果，所以先排序，再用判断移动下标**
### [905. Sort Array By Parity][3]  [26. Remove Duplicates from Sorted Array][4] [27. Remove Element][5] [283. Move Zeroes][6] 
> **这些题都可以通过两个指针来解决，类似快排的partition函数，一个用来遍历，另一个用来分隔数组，**
### [206. Reverse Linked List][7]   [92. Reverse Linked List II][8]
> **常规操作,II还需要熟练一些**
### [203. Remove Linked List Elements][9] 
> **这里new了新的头指针来指向原头指针，这样写的代码更简洁，便于处理要删的指针在头部的情况**
### [237. Delete Node in a Linked List][10] 
> **一般要删掉一个节点都要用该节点的前一个指针，但是现在直接给要删的指针，这时可以从该节点开始将后面的指针的数据向前覆盖，到最后一个的时候指向null就可以了，这里不用考虑指针在头部和尾部的情况，较为简单**
### [2. Add Two Numbers][11]
> **看别人的题解大都是生成新的节点链接在一起，我是在原链表上操作，讲道理申请空间不用时间的吗，-_-! 为啥比他们的慢，虽然判断多了一些**
### [67. Add Binary][12]
> **没什么好说的，直接取值操作即可，判断进位即可**
### [66. Plus One][13]
> **代码写的好烂。。。。**
### [53. Maximum Subarray][14]
> **dp**
### [121. Best Time to Buy and Sell Stock][15]
> **dp，用一个变量保存最低买入价格，在遍历的时候更新最大收益及最低买入价格**
### [70. Climbing Stairs][16]
> **类似斐波那契数列**
### [58. Length of Last Word][17]
> **居然那么简单，从尾向头扫，当碰到空格跳出，跳出的条件为碰到过非空格字符**
### [155. Min Stack][18]
> **用了两个栈，辅助栈用来存放当前栈顶最小元素**
### [169. Majority Element][19]
> **找众数，最简代码就是排序，返回数组中点。还有一种O(n)的方法就是通过元素两两抵消来计数**
### [86. Partition List][20]
> **本来以为可以用快排的思路来做，直接交换val，但是发现还有一个保持原有顺序的限制，于是就用删除节点，插入节点的方法来做，指针的移动方式还是跟快排一个思路，但是要注意分隔指针的移动。看了别人题解发现挺简单的，还是被自己之前的思路限制了，方法大致就是用两个队列，一个存<x的数，另一个存>=x的数，最后链接起来。**
### [13. Roman to Integer][21]
> **用了个栈，其实没必要**

[1]: https://leetcode.com/problems/two-sum/description/
[2]: https://leetcode.com/problems/3sum/description/
[3]: https://leetcode.com/problems/sort-array-by-parity/description/
[4]: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
[5]: https://leetcode.com/problems/remove-element/description/
[6]: https://leetcode.com/problems/move-zeroes/description/
[7]: https://leetcode.com/problems/reverse-linked-list/description/
[8]: https://leetcode.com/problems/reverse-linked-list-ii/description/
[9]: https://leetcode.com/problems/remove-linked-list-elements/description/
[10]: https://leetcode.com/problems/delete-node-in-a-linked-list/description/
[11]: https://leetcode.com/problems/add-two-numbers/description/
[12]: https://leetcode.com/problems/add-binary/description/
[13]: https://leetcode.com/problems/plus-one/description/
[14]: https://leetcode.com/problems/maximum-subarray/description/
[15]: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
[16]: https://leetcode.com/problems/climbing-stairs/description/
[17]: https://leetcode.com/problems/length-of-last-word/description/
[18]: https://leetcode.com/problems/min-stack/description/
[19]: https://leetcode.com/problems/majority-element/description/
[20]: https://leetcode.com/problems/partition-list/description/
[21]: https://leetcode.com/problems/roman-to-integer/description/
