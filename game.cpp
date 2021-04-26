
#include <iostream>
using namespace std;

class Gift {
public:
    string get_name() { return name; }
    void set_name(string x_name) { name = x_name; }
private:
    string name;
};

class Player {

    Player(string x_name, int x_id) {
        name = x_name;
        id = x_id;
        gift_counter = 0;
        list_gift = new Gift[gift_counter];
    };
    Player(const Player &x) {
        name = x.name;
        id = x.id;
        Gift* temp = new Gift[gift_counter];
        for (int i = 0; i < gift_counter; i++) {
            temp[i] = list_gift[i];
        }
        delete[] temp;
        temp = 0;

    };
    ~Player() {
        delete[] list_gift;
        list_gift = 0;
    };
    void attack();

    int get_id() { return id; }
    string get_name() { return name; }
    int get_health() { return health; }
    void set_health(int x_health) { health = x_health; }
    int get_damage() { return damage; }
    void set_damage(int x_damage) { damage = x_damage; }
protected:
    string name;
    int health;
    int damage;
    int id;
    Gift* list_gift;
    int gift_counter;

};

void Player::attack() {
     health - damage;
}
void choose(Player &x_player) {


}
void fight() {


}

int main()
{
    setlocale(LC_ALL, "ru");





}

