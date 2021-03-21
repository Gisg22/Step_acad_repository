
#include <iostream>
using namespace std;
int main()
{
    int vibor;
    int vibor2;
    int vibor3;
    int vibor4;
    int vibor5;
    int vibor6;
    int vibor7;
    int reputation;
    int money;
    reputation = 9;
    money = 50;
    setlocale(LC_ALL, "ru");
    cout << "Money: " << money << endl;
    cout << "Reputation: " << reputation << endl;
    cout << "Aladdin came to the cave. " << endl;
    cout << "He accidentally slipped and got into some kind of treasure room." << endl;
    cout << "He saw a lamp and rubbed it against it. Jin came out." << endl;
    do {
        cout << " 1. Who are you?" << endl;
        cout << " 2. If you are Jin, you must fulfill three wishes. Can you do this service for me for money?" << endl;
        cin >> vibor;
        switch (vibor) {
        case 1:
            cout << "I am Jin, I can fulfill all three wishes." << endl;
            break;
        case 2:
            cout << "I don't need your money. I need you to buy me something to eat." ;
            cout << " I am a spirit, but I want to eat ..." << endl;
            cout << "1. I have an apple. I can feed you. " << endl;
            cout << "2. Okay, I'll buy you something to eat." << endl;
            cin >> vibor2;
            if (vibor2 == 1) {
                cout << "Apples are not enough for me, I need a shish kebab to eat." << endl;
                cout << "Go to the merchant and buy me ten shashlik sticks." << endl;
                cout << "1. Okay." << endl;
                cin >> vibor3;
                cout << "Aladin got out of this cave and wandered through the desert. " << endl;
                cout << "He saw a stranger in a hood and was about to ask about the nearest market." << endl;
                cout << "1. Do you know which city you need to go to to meet a food vendor?" << endl;
                cin >> vibor4;
                if (reputation == 10) {
                    cout << "Yes, yes, the city is located if you walk ten palm trees along the road to the left, and then turn right." << endl;
                }
                else
                {
                    cout << "Not so easy :)). I can tell you where that city is, but in return I ask ten dichrams. " << endl;
                    cout << "1. I just have so much money. 2. I have no money ... (lie in the desert and cry)." << endl;
                    cin >> vibor5;
                    if (money >= 10 && vibor5 == 1) {
                      
                        cout << "Apparently you have a lot of money ... Nice and rich guy ... So be it. I'll tell you." << endl;
                        cout << "The city is located if you walk ten palm trees along the road to the left, and then turn right." << endl;
                        cout << "Thank you very much..." << endl;
                        money = 40;
                        reputation = 12;
                        cout << "Money: " << money << endl;
                        cout << "Reputation: " << reputation << endl;
                        cout << "And Aladin went where the merchant told him. Came to the foot of the city." << endl;
                        cout << "A huge guard stood at the foot of the city. And silently did not let pass." << endl;
                        cout << "1. Please let me pass, guard. I won't do anything bad in this city." << endl;
                        cin >> vibor6;
                        if (reputation >= 12) {
                            cout << "Okay you can go." << endl;
                            cout << "And Aladdin went to look for a merchant." << endl;
                            cout << "As a result, he met the shop of a kebab merchant." << endl;
                            cout << "1. Do you have a kebab? " << endl;
                            cin >> vibor7;
                            if (money >= 20) {
                                cout << "Thank you for your purchase!" << endl;
                                money = 20;
                                reputation = 15;
                                cout << "Money: " << money << endl;
                                cout << "Reputation: " << reputation << endl;
                                cout << "And Aladdin came to Jin again." << endl;
                                cout << "Jin: Okay, I fulfill your three wishes ... (game end)" << endl;
                            }
                            else
                                cout << "Great, I advise you to go from here. It makes no sense to be here without money." << endl;
                            cout << "Game end." << endl;

                        }
                        else {
                            cout << "No foreigners allowed (game end)." << endl;
                        }
                        break;
                    }
                    else if(vibor5 == 2);
                        cout << "Well then, I won't tell you anything at all :) (end of the game)" << endl;
                }
            }
            else if (vibor2 == 2) {
                cout << "Okay, you can go to the food vendor and order ten sticks of kebab for me." << endl;
                cout << "Apples are not enough for me, I need a shish kebab to eat." << endl;
                cout << "Go to the merchant and buy me ten shashlik sticks." << endl;
                cout << "1. Okay." << endl;
                cin >> vibor3;
                cout << "Aladin got out of this cave and wandered through the desert. " << endl;
                cout << "He saw a stranger in a hood and was about to ask about the nearest market." << endl;
                cout << "1. Do you know which city you need to go to to meet a food vendor?" << endl;
                cin >> vibor4;
                if (reputation == 10) {
                    cout << "Yes, yes, the city is located if you walk ten palm trees along the road to the left, and then turn right." << endl;
                }
                else
                {
                    cout << "Not so easy :)). I can tell you where that city is, but in return I ask ten dichrams. " << endl;
                    cout << "1. I just have so much money. 2. I have no money ... (lie in the desert and cry)." << endl;
                    cin >> vibor5;
                    if (money >= 10 && vibor5 == 1) {

                        cout << "Apparently you have a lot of money ... Nice and rich guy ... So be it. I'll tell you." << endl;
                        cout << "The city is located if you walk ten palm trees along the road to the left, and then turn right." << endl;
                        cout << "Thank you very much..." << endl;
                        money = 40;
                        reputation = 12;
                        cout << "Money: " << money << endl;
                        cout << "Reputation: " << reputation << endl;
                        cout << "And Aladin went where the merchant told him. Came to the foot of the city." << endl;
                        cout << "A huge guard stood at the foot of the city. And silently did not let pass." << endl;
                        cout << "1. Please let me pass, guard. I won't do anything bad in this city." << endl;
                        cin >> vibor6;
                        if (reputation >= 12) {
                            cout << "Okay you can go." << endl;
                            cout << "And Aladdin went to look for a merchant." << endl;
                            cout << "As a result, he met the shop of a kebab merchant." << endl;
                            cout << "1. Do you have a kebab? " << endl;
                            cin >> vibor7;
                            if (money >= 20) {
                                cout << "Thank you for your purchase!" << endl;
                                money = 20;
                                reputation = 15;
                                cout << "Money: " << money << endl;
                                cout << "Reputation: " << reputation << endl;
                                cout << "And Aladdin came to Jin again." << endl;
                                cout << "Jin: Okay, I fulfill your three wishes ... (game end)" << endl;
                            }
                            else
                                cout << "Great, I advise you to go from here. It makes no sense to be here without money." << endl;
                            cout << "Game end." << endl;

                        }
                        else {
                            cout << "No foreigners allowed (game end)." << endl;
                        }
                        break;
                    }
                    else if (vibor5 == 2);
                    cout << "Well then, I won't tell you anything at all :) (end of the game)" << endl;
                }
            }
            else
                cout << "I do not understand what you mean..." << endl;
            break;
        default:
            cout << "I don't understand what you want to say ..." << endl;
            break;
        }
    } while (vibor == 1);
}

