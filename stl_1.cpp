//контейнеры stl
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
#include <set>
#include <map>
#include<vector>
#include<fstream>
#include <set>
#include <map>
using namespace std;
class User
{
public:
	User(string name, int age) :name(name), age(age) {};
	User() {};
	void print() {
		cout << name << "(" << age << ")" << endl;
	}
private:
	string name;
	int age;
};

int duplicateCount(string str) {
	map <char, int> symbols;
	for (char c : str) {
		if (isalpha(c)) c = tolower(c);
		if (symbols.find(c) == symbols.cend()) {
			symbols[c] = 0;
		}
		else {
			symbols[c] = 1;
		}
	}
	int sum = 0;
	for (auto item : symbols) sum += item.second;
	return sum;
	
}
int main() {
	srand(time(NULL));
//что-то вроде массива
/*	vector <string > names;
	names.push_back("Gffrd");
	for (int i = 0; i < names.size(); i++) {
		cout<<names[i] << endl;
	} 
	//set сортирует по алфавиту и по возрастанию чисeл и убирает повторяющее, хранит значение
	set<string> keys;
	keys.insert("A");
	keys.insert("D");
	keys.insert("B");


	for (auto iter = keys.begin();
		iter != keys.end(); iter++) {
		cout << *iter << endl;
	}
	//map тоже убирает повторяющее, хранит ключи и значения
	map <string, string> capitalis;
	capitalis["The world"] = "Mexico";
	capitalis["Moscow"] = "Restoraunt";
	capitalis["Cosmos"] = "Planet";
	for (auto iter = capitalis.begin();
		iter != capitalis.end(); iter++) {
		cout << iter->first << " - " << iter->second << endl;
	}
	
	multimap <string, string> capitalis;
	capitalis.insert(pair <string, string>("The world", "Austria"));

	for (auto iter = capitalis.begin();
		iter != capitalis.end(); iter++) {
		cout << iter->first << " - " << iter->second << endl;
	} */


	map<string, User> sdp;
	sdp["assassin"] = User("Ruslan", 15);
	sdp["racer"] = User("Viktor", 15);
	sdp["astronaut"] = User("Sergey", 16);
	sdp["boxer"] = User("Rodion", 15);

	set<string> need;
	need.insert("racer");
	need.insert("astronaut");

	vector<User> users;

	for (auto item : need) {
		if (sdp.find(item) != sdp.cend()) {
			users.push_back(sdp[item]);
			sdp[item].print();
		}
	}

}




