📘 2. Pass by Reference
Definition

Pass by Reference means the function receives the original variable, not a copy. Changes inside the function affect the original variable.

Syntax
void fun(int &x)

or

void fun(vector<int>& v)
Example
void fun(int &x)
{
    x = 100;
}

int main()
{
    int a = 10;
    fun(a);
    cout << a;
}

Output

100
Advantages
No copy is created.
Faster and memory efficient.
Can modify the original data.
Disadvantages
Original data may change accidentally.
Interview Point
Use pass by reference for large objects like vector, string, map, etc.