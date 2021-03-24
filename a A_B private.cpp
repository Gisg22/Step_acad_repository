#include <iostream>
using namespace std;

class A {
public:
    void set_a(int a) { this->a = a; }
    int get_a() { return this->a; }

private:
    int a;
};

class B : public A{
public:
    void set_b(int b) { this->b = b; }
    int get_b() { return this->b; }

    int function_get_a_a_b() {
       return a_b.get_a();
    }

    void function_set_a_a_b(int &c) {
        a_b.set_a(c);
    }


private:
    int b;
    A a_b;
};

int main() {
    B bb;
    int r = 5;
    bb.function_set_a_a_b(r);
    bb.function_get_a_a_b();

    cout <<bb.function_get_a_a_b() <<endl;
   
}
