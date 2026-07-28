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