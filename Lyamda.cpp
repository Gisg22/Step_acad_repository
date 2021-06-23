
#include <iostream>
#include <conio.h>

using namespace std;

void Func(int a, double b, int(*p)(int, int)) {
    p(5, 6);
}

int main()
{
    srand(time(NULL));

    Func(4, 6.21, [](int x, int y) { return x *= y; });

    double (*ptr)(double, double) = [](double x, double y) {
        return x + y;
    };
    ptr = [](double a, double b) {
        return 3 * a + b;
    };
}