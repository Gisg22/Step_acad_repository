
#include <iostream>
using namespace std;

class NPC {
public:
    NPC() {
        health = 100;
    };
    int Get_Health() {
        return health;
    }
private:
    int health;
};

class qest {
public:
    qest() {
        stade = 0;
    };
    int Get_Stade() {
        return stade;
    }
private:
    int stade;
};


int main()
{
    setlocale(LC_ALL, "ru");
    NPC Oldric;
    qest Qest;
    try {
        if (Oldric.Get_Health() <= 0 && Qest.Get_Stade() < 100) throw - 1;
        else if (Oldric.Get_Health() <= 0 && Qest.Get_Stade() > 100) throw - 2;

    }

    catch (int x) {
        if (x == -1) cout << "Персонаж погиб до того, как начался квест. " << endl;
        else if (x == -2) cout << "Персонаж погиб после того, как начался квест" << endl;
    }

}
