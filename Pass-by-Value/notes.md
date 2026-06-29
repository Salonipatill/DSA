## 📘 1. Pass by Value

# Definition

Pass by Value means a copy of the variable is passed to the function. Changes inside the function do not affect the original variable.

# Syntax
void fun(int x)

or

void fun(vector<int> v)

# Example
void fun(int x)
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

10
## Advantages

Original data remains safe.

Suitable when no modification is needed.

## Disadvantages

Creates a copy.

Uses more memory and time for large objects.

## Interview Point

Pass by value creates a new copy of the variable.