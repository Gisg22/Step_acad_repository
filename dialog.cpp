// программа о разговоре с кузнецом. В этой программе мы сможем вибирать варианты продолжения диалогов


#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int variant; //вариант продолжения диалога.
    int attitude;//отношение между двумя персонажами.
    int authority;//авторитет и харизматичность героя в своих окраинах.
    int honesty;
    //характеристики главного героя и персанажа из игры.
    honesty = 5;
    attitude = 10;
    authority = 20;

    cout << "Hello wanderer.I am Andre's blacksmith. What do you need?" << endl;
    cout << "1.Let's bargain." << endl;
    cout << "2. I carved out your village ..." << endl;
    cout << "3. Rumors that you are dealing in illegal weapons ..." << endl;
    cout << "4. No, nothing is needed. Farewell." << endl;
    cin >> variant;
    switch (variant) //кейсы для осуществления выбора вариантов.
    {

    case 1:

        cout << "Okay. I have a couple of items for sale." << endl;
        break;

    case 2:

        if (attitude >= 10 && authority>=25)
            cout << "I hope you're kidding..." << endl;
        else
            cout << "Here is a dog ... I have to fill you up with my bare hands!" << endl;
        break;


    case 3:

        if (honesty >= 5)
            cout << "There were such things. I'm sorry." << endl;

        else
            cout << "I don’t do that. For I am an ordinary blacksmith." << endl;
        break;
    case 4:
        cout << "Since nothing is so nothing ..." << endl;
        break;

    default:
        cout << "What do you want from me at all?" << endl;

    }

}

