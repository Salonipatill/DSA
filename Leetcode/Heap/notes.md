## Heap

A Heap is a special type of Complete Binary Tree that follows the Heap Property.


Heap: A Heap is a Complete Binary Tree in which every parent node satisfies the Heap Property.

There are two types of Heap:

Max Heap
Min Heap


Complete Binary Tree: Every level is completely filled except possibly the last level, and the last level is filled from left to right.

        10
       /  \
      8    6
     / \  /
    5  4 2

    This is a Complete Binary Tree.


Types of Heap
1. Max Heap

In a Max Heap, every parent node is greater than or equal to its children.


Rule
Parent ≥ Left Child
Parent ≥ Right Child


Example:

          50
        /    \
      30      40
     /  \    /  \
   10   20 15   35


2. Min Heap

In a Min Heap, every parent node is smaller than or equal to its children.

Rule
Parent ≤ Left Child
Parent ≤ Right Child

Example:

          5
        /   \
      10     8
     /  \   / \
   20  15 25  30


| Operation   | Time Complexity |
| ----------- | --------------- |
| Peek (Root) | O(1)            |
| Insert      | O(log n)        |
| Delete Root | O(log n)        |
| Build Heap  | O(n)            |
| Heap Sort   | O(n log n)      |



priority_queue<
    Data Type,
    Container,
    Comparator
>

Data Type → What type of data to store (int)
Container → Where to store the data (vector<int>)
Comparator → How to compare elements (greater<int> or the default less<int>)

priority_queue<int, vector<int>, greater<int>> pq;
Min Heap

Smallest element comes first.



priority_queue<int> pq;

👉 Max Heap

Biggest element comes first.




priority_queue<pair<int,int>>pq;


custom comparator:-
What should be compared (first, second, sum, difference, etc.)
✅ On what basis it should be compared (ascending, descending, even/odd, custom rule, etc.)


Leetcode number 973 laern again



| LeetCode # | Problem Name                                                           | Difficulty |
| ---------- | ---------------------------------------------------------------------- | ---------- |
| **1046**   | Last Stone Weight                                                      | Easy       |
| **703**    | Kth Largest Element in a Stream                                        | Easy       |
| **295**    | Find Median from Data Stream                                           | Hard       |
| **215**    | Kth Largest Element in an Array                                        | Medium     |
| **347**    | Top K Frequent Elements                                                | Medium     |
| **451**    | Sort Characters By Frequency                                           | Medium     |
| **767**    | Reorganize String                                                      | Medium     |
| **621**    | Task Scheduler                                                         | Medium     |
| **23**     | Merge k Sorted Lists                                                   | Hard       |
| **973**    | K Closest Points to Origin                                             | Medium     |
| **506**    | Relative Ranks                                                         | Easy       |
| * 
| **1167**   | Minimum Cost to Connect Sticks *(same concept as Connect N Ropes)*     | Medium     |
