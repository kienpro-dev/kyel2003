#include <iostream>

using namespace std;

void tower(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << "Chuyen tu " << a << " sang " << c << endl;
        return;
    }

    tower(n - 1, a, c, b);
    tower(1, a, b, c);
    tower(n - 1, b, a, c);
}

int main()
{
    tower(3, 'a', 'b', 'c');
    return 0;
}