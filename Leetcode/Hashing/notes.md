Hashing is a technique used to store and search data very quickly.

Instead of searching every element one by one (O(n)), hashing allows us to find an element in approximately O(1) time.

A hash function converts a value into an index.

Hash(x) = x % 10

Collision

When two or more values get the same index, it is called a collision.

Collision handling methods:

Chaining
Open Addressing (Linear Probing, Quadratic Probing, Double Hashing)


Hash Table

A hash table stores

Key → Value


The Standard Template Library (STL) provides hash-based containers.

1. unordered_set

Stores unique values.


#include<unordered_set>


unordered_set<int> st;


Operations

Insert

st.insert(50);

Delete

st.erase(50);

Search

st.find(50);

Size

st.size();

Empty

st.empty();


2. unordered_map

Stores

Key → Value


unordered_map<string,int> mp;

mp["Apple"]=50;
mp["Banana"]=20;
mp["Orange"]=30;


Access
cout<<mp["Apple"];


Update
mp["Apple"]=80;


Remove
mp.erase("Apple");


Check
if(mp.find("Apple")!=mp.end())
    cout<<"Exists";


Traverse
for(auto x : mp)
{
    cout<<x.first<<" "<<x.second<<endl;
}


Note: unordered_map does not maintain insertion order.


map vs unordered_map

Feature	              map      	      unordered_map
Data Structure	   Red-Black Tree	   Hash Table
Search	            O(log n)	       O(1) average
Order	            Sorted	           Unordered

Interview Usage	When sorted order is needed	When fast lookup is needed


| Order | LeetCode                                    | Difficulty | Main Concept                              |
| ----- | ------------------------------------------- | ---------- | ----------------------------------------- |
| ⭐ 1   | **217. Contains Duplicate**                 | Easy       | `unordered_set`                           |
| ⭐ 2   | **242. Valid Anagram**                      | Easy       | Character frequency using `unordered_map` |
| ⭐ 3   | **383. Ransom Note**                        | Easy       | Character counting                        |
| ⭐ 4   | **205. Isomorphic Strings**                 | Easy       | Two hash maps                             |
| ⭐ 5   | **1. Two Sum**                              | Easy       | Hash map for fast lookup                  |
| ⭐ 6   | **219. Contains Duplicate II**              | Easy       | Hash map + indices                        |
| ⭐ 7   | **349. Intersection of Two Arrays**         | Easy       | Hash set                                  |
| ⭐ 8   | **202. Happy Number**                       | Easy       | Hash set + cycle detection                |
| ⭐ 9   | **387. First Unique Character in a String** | Easy       | Frequency counting                        |
| ⭐ 10  | **290. Word Pattern**                       | Easy       | Hash map                                  |


| Order | LeetCode                                          | Difficulty | Main Concept               |
| ----: | ------------------------------------------------- | ---------- | -------------------------- |
|   ⭐ 1 | **217. Contains Duplicate**                       | Easy       | `unordered_set`            |
|   ⭐ 2 | **242. Valid Anagram**                            | Easy       | Character frequency        |
|   ⭐ 3 | **383. Ransom Note**                              | Easy       | Character counting         |
|   ⭐ 4 | **205. Isomorphic Strings**                       | Easy       | Two hash maps              |
|   ⭐ 5 | **1. Two Sum**                                    | Easy       | Hash map lookup            |
|   ⭐ 6 | **219. Contains Duplicate II**                    | Easy       | Hash map + index           |
|   ⭐ 7 | **349. Intersection of Two Arrays**               | Easy       | Hash set                   |
|   ⭐ 8 | **202. Happy Number**                             | Easy       | Hash set + cycle detection |
|   ⭐ 9 | **387. First Unique Character in a String**       | Easy       | Frequency counting         |
|  ⭐          |
|  ⭐ 11 | **169. Majority Element**                         | Easy       | Hash map counting          |
|  ⭐ 12 | **136. Single Number**                            | Easy       | Hash map / XOR             |
|  ⭐ 13 | **1207. Unique Number of Occurrences**            | Easy       | Frequency + set            |
|  ⭐               |
|  ⭐         |
|  ⭐          |
|  ⭐ 18 | **448. Find All Numbers Disappeared in an Array** | Easy       | Hash set                   |
|  ⭐ 19 | **645. Set Mismatch**                             | Easy       | Hash map                   |
|  ⭐ 20 | **599. Minimum Index Sum of Two Lists**           | Easy       | Hash map    
 10 | **290. Word Pattern**                             | Easy       | Two-way mapping 
 14 | **500. Keyboard Row**                             | Easy       | Hash set                     |
 15 | **389. Find the Difference**                      | Easy       | Character frequency
 16 | **771. Jewels and Stones**                        | Easy       | Hash set lookup            |
|  ⭐ 17 | **1002. Find Common Characters**                  | Easy       | Frequency arrays  
  

| Order | LeetCode                                              | Difficulty | Main Concept                  |
| ----: | ----------------------------------------------------- | ---------- | ----------------------------- |
|  ⭐ 21 | **49. Group Anagrams**                                | Medium     | Hash map + sorted string      |
|  ⭐ 22 | **347. Top K Frequent Elements**                      | Medium     | Frequency map + heap          |
|  ⭐ 23 | **560. Subarray Sum Equals K**                        | Medium     | Prefix sum + hash map         |
|  ⭐ 24 | **3. Longest Substring Without Repeating Characters** | Medium     | Sliding window + hash map     |
|  ⭐ 25 | **438. Find All Anagrams in a String**                | Medium     | Sliding window                |
|  ⭐ 26 | **128. Longest Consecutive Sequence**                 | Medium     | Hash set                      |
|  ⭐ 27 | **525. Contiguous Array**                             | Medium     | Prefix sum + hash map         |
|  ⭐ 28 | **930. Binary Subarrays With Sum**                    | Medium     | Prefix sum                    |
|  ⭐ 29 | **523. Continuous Subarray Sum**                      | Medium     | Prefix sum + modulo           |
|  ⭐ 30 | **525. Contiguous Array**                             | Medium     | Hash map                      |
|  ⭐ 31 | **36. Valid Sudoku**                                  | Medium     | Hash set                      |
|  ⭐ 32 | **454. 4Sum II**                                      | Medium     | Hash map                      |
|  ⭐ 33 | **15. 3Sum**                                          | Medium     | Sorting + hashing             |
|  ⭐ 34 | **18. 4Sum**                                          | Medium     | Sorting + two pointers        |
|  ⭐ 35 | **49. Group Anagrams**                                | Medium     | String hashing                |
|  ⭐ 36 | **981. Time Based Key-Value Store**                   | Medium     | Hash map                      |
|  ⭐ 37 | **146. LRU Cache**                                    | Medium     | Hash map + doubly linked list |
|  ⭐ 38 | **380. Insert Delete GetRandom O(1)**                 | Medium     | Hash map + array              |
|  ⭐ 39 | **380. Randomized Set**                               | Medium     | Hashing                       |
|  ⭐ 40 | **451. Sort Characters By Frequency**                 | Medium     | Frequency map                 |



| Order | LeetCode                                           | Difficulty | Main Concept              |
| ----: | -------------------------------------------------- | ---------- | ------------------------- |
|  ⭐ 41 | **76. Minimum Window Substring**                   | Hard       | Sliding window + hash map |
|  ⭐ 42 | **30. Substring with Concatenation of All Words**  | Hard       | Hash map                  |
|  ⭐ 43 | **187. Repeated DNA Sequences**                    | Medium     | Rolling hash              |
|  ⭐ 44 | **609. Find Duplicate File in System**             | Medium     | Hash map                  |
|  ⭐ 45 | **692. Top K Frequent Words**                      | Medium     | Hash map + heap           |
|  ⭐ 46 | **659. Split Array into Consecutive Subsequences** | Medium     | Greedy + hash map         |
|  ⭐ 47 | **954. Array of Doubled Pairs**                    | Medium     | Frequency map             |
|  ⭐ 48 | **916. Word Subsets**                              | Medium     | Frequency hashing         |
|  ⭐ 49 | **792. Number of Matching Subsequences**           | Medium     | Hash map                  |
|  ⭐ 50 | **1152. Analyze User Website Visit Pattern**       | Medium     | Hash map + sorting        |


if (mp[it.first] >= 2)

means:

if (frequency of this number >= 2)

because:

it.first is the number (key).
mp[it.first] looks up the value (frequency) associated with that key.

A simpler way is to use it.second directly:

for (auto &it : mp) {
    if (it.second >= 2) {
        return true;
    }
}


---------------------------------------

If the element is not found, then:

visited.find(n)

returns

visited.end()

So the comparison becomes:

visited.end() == visited.end()

which is

true




----------------------

3. Access inside a loop
for (int i = 0; i < s.size(); i++)
{
    cout << s[i] << " -> " << mp[s[i]] << endl;
}