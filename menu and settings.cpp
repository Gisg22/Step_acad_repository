

#include <iostream>
using namespace std;
int main()
{
    string vibor; //выбор 1.
    string clase1; //класс персонажа.
    bool menuESC = true; //меню.
    int vibor2; //выбор 2.
    int vibor3;//выбор 3.
    while (menuESC) {

        cout << "1. Continue. " << endl;
        cout << "2. Load save. " << endl;
        cout << "3. Ouitting. " << endl;
        cout << "4. Newgame. " << endl;
        cout << "5. Settings." << endl;
        cin >> vibor;
    

        if (vibor == "Newgame") {
            cout << "Enter you name" << endl;
        }
        else if (vibor == "Settings") {
            cout << " Selecting settings: " << endl;
            cout << "1. Graphics settings." << endl;
            cout << "2. Brightness setting." << endl;
            cout << "3. Language." << endl;
            cout << "4. Control." << endl;
            cout << "5. Sound." << endl;
            cin >> vibor3;

            switch (vibor3) {
            case 1:
                cout << "You can customize the graphics" << endl;
                cout << "1. Low settings" << endl;
                cout << "2. Medium settings" << endl;
                cout << "3. High settings" << endl;
                cout << "4. Max settings" << endl;
                break;
            case 2:
                cout << "Make low brightness." << endl;
                cout << "Make medium brightness." << endl;
                cout << "Make it high brightness." << endl;
               
                break;
            case 3:
                cout << "Choose a language: " << endl;
                cout << "English. " << endl;
                cout << "Russian. " << endl;
                cout << "Spanish. " << endl;
                cout << "Japanese. " << endl;
                cout << "Chinese. " << endl;
            case 4:
                cout << "Character control..." << endl;
                cout << "Interaction management..." << endl;
                cout << "Mouse controls..." << endl;

                break;
            case 5:
                cout << "Make the sound low." << endl;
                cout << "Make the sound average." << endl;
                cout << "Make the sound big." << endl;
                break;
            default:
                cout << "There is no such choice!" << endl;
                break;
            }

            break;
        }
        
        else if (vibor == "Load save") 
            cout << "Choose your seved charactres." << endl;
            cout << "If you want to select Keanu Reeves, press 1" << endl;
            cout << "If you want to select Geralt of Rivia, press 2" << endl;
            cout << "And if you want to choose a gangster, press 3" << endl;
            cin >> vibor2;
        
        switch (vibor2) {
        case 1:
            cout << "You are KEANU REEEEEEEEEEVS!!!" << endl;
            clase1 = "Keanu Reeves";
            cout << "Yor in-game name - " << clase1 << endl;
            menuESC = false;
            break;
        case 2:
            cout << "You are a dumb witcher)" << endl;
            clase1 = "Geralt of Rivia";
            cout << "Yor in-game name - " << clase1 << endl;
            menuESC = false;
            break;
        case 3:
            cout << "You gangster)" << endl;
            clase1 = "Gangster";
            cout << "Yor in-game name - " << clase1 << endl;
            menuESC = false;
            break;
        default:
            cout << "There is no such choice!" << endl;
            break;
        }

    }
    }




