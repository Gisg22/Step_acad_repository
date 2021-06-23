
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <Windows.h>
#include <time.h>
using namespace std;

int main()
{
    //vector <int>  nums{ 5,4,3,2,21,6,89,9,9,4, 21, 75, };
   // cout << count(nums.begin(), nums.end(), 3); 
    //считает, сколько выбранных элементов в контейнере

 /*   for (int item : nums) cout << item << " ";
    cout << endl;
    sort(nums.begin(), nums.end());
    cout << "After sorted: " << endl;
    for (int item : nums) cout << item << " ";
    cout << endl;
    //сортирует
    unique(nums.begin(), nums.end());
    cout << "After sorted: " << endl;
    for (int item : nums) cout << item << " ";
    cout << endl; */
    //не до конца убирает повторяющие элементы

    //string str = "Hello Liberty";
    //for (char& item : str) item = tolower(item);
   // cout << count(str.begin(), str.end(), "l") + count(str.begin(), str.end(), "L") << endl;

    /*ifstream file("text.txt");
    string text, alphabet = "qwertyuiopasdfghjklzxcvbnm";
    getline(file, text, "\0");
    sort(alphabet.begin(), alphabet.end());
    int letter_count = 0;
    for (char letter : alphabet) {
        letter_count = count(text.begin(), text.end())
    } */
} 