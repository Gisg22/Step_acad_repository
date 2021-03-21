
#include <iostream>
using namespace std;
int Foo(int a) {
	return ++a;
}

int main() {
	setlocale(LC_ALL, "ru");
	int val = 1;
	val = Foo(val);
	cout << val << endl;
		
}