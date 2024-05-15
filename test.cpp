#include <iostream>

using namespace std;

void test()
{
    cout << "test" << endl;
}

int count(int a）
{
    cout << a*a << endl;
    return a*a;
}

int main()
{
    sleep(1);
    cout << "main" << endl;
    test();
}
