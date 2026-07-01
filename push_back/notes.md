## 📘 3. push_back()

# Definition

push_back() is a vector function used to add an element at the end of the vector.

# Syntax

vector.push_back(value);

Example

vector<int> ans;

ans.push_back(5);
ans.push_back(10);
ans.push_back(15);

Vector becomes

[5]
↓

[5,10]
↓

[5,10,15]

```text
Example Program
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ans;

    ans.push_back(5);
    ans.push_back(10);
    ans.push_back(15);

    for(int x : ans)
        cout << x << " ";
}
```

Output

5 10 15
## Advantages

Easy to insert elements.

Automatically increases the vector size.

## Interview Point

push_back() always inserts the element at the end of the vector.

It is commonly used in DSA problems to store traversal results, such as:

ans.push_back(root->val);

where each visited node is added to the answer vector.