
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
   const int size = 5;
   int shift;
   int* arr = new int[size];
   srand(time(0));
   


   for (int i = 0; i < size; i++) {
	   arr[i] = rand() % 11;
   }
   cout << "NotShift: " << endl;
   for (int i = 0; i < size; i++) {
	   cout << arr[i] << endl;
   }
   int null_element = arr[0];
   for (int i = 1; i < size; i++) {
	   arr[i - 1] = arr[i];
   }
   arr[size - 1] = null_element;
   cout << "Shift: " << endl;
   for (int i = 0; i < size; i++) {
	   cout << arr[i] << endl;
   }
   

}

