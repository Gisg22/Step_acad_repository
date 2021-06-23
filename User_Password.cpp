
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class User {
public:
	User(string name, string password);
	string GetPassword();
	string GetName();
	void SetPassword(string password);
private:
	string name_;
	string password_;
};

User::User(string name, string password) {
	name_ = name;
	password_ = password;
}

void User::SetPassword(string password) {
	password_ = password;
}

string User::GetPassword() {
	return password_;
}

string User::GetName() {
	return name_;
}

int main()
{
	void (*CheckUserInfo)(User&) = [](User& u) {

		bool (*haveDight)(string) = [](string s) {
			for (char item : s) {
				if (isdigit(item)) return true;
			}
			return false;
		};
		if()
	};
	return 0;
}

