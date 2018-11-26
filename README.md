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
> **常规操作**
### [203. Remove Linked List Elements][9] 
> **这里new了新的头指针来指向原头指针，这样写的代码更简洁，便于处理要删的指针在头部的情况**
### [237. Delete Node in a Linked List][10] 
> **一般要删掉一个节点都要用该节点的前一个指针，但是现在直接给要删的指针，这时可以从该节点开始将后面的指针的数据向前覆盖，到最后一个的时候指向null就可以了，这里不用考虑指针在头部和尾部的情况，较为简单**


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
