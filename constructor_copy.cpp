#include <iostream>
#include <ctime>
using namespace std;

class pet {
private:
	int *age;
	int *id;
	string name;
	int *health;
	int *mood;
	bool *s_ill;
	int *satiety;
public:
	pet(int x_id) {
		age = new int(1);
		health = new int(100);
		mood = new int(5);
		s_ill = new bool(false);
		satiety = new int(5);
		id = new int;
		*id = x_id;
     } 
	~pet() {
		delete age;
		age = 0;
		delete health;
		health = 0;
		delete mood;
		mood = 0;
		delete s_ill;
		s_ill = 0;
		delete id;
		id = 0;
	}
	void set_name(string x_name) { name = x_name; }
	int get_age() { return *age; }
	int get_health() { return *health; }
	int get_mood() { return *mood; }
	int get_s_ill() { return *s_ill; }
	int get_satiety() { return *satiety; }
	void check();
};
void pet::check() {

	
}
/*void create(){
	cout << "Введите имя своего питомца: " << endl;
	pet PET(7);
	string name;
	cin >> name;
	PET.set_name(name);
} */

void check() {

}




int main() {
	setlocale(LC_ALL, "ru");
	
}