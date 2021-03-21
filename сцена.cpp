#include <iostream>
#include<windows.h>
#include <string>
using namespace std;

class NPC {
public:
	NPC(string x, int y);
	void dialogue();
	void get_name();
private:
	string name;
	int id;

	void attack();
	void repair();
};

NPC::NPC(string x, int y) {
	name = x;
	id = y;
}

void NPC::dialogue() {
	int switch_answ;
	int switch_answ_2;
	string myName;
	if (id == 1) {

		int force = 3;
		int answer = true;
		int answer2 = true;

		cout << "Enter your name: " << endl;
		cin >> myName;

		cout << "Загрузка Мира... Пожалуйста подождите... " << endl;
		Sleep(3000);
		if (id == 1) {
			cout << "Привет странник, меня зовут Олдрик. Я местный кузнец этой деревни,могу как-то помочь тебе?\n" << endl;
			cout << "1.Здравствуй меня зовут " << myName << " можешь рассказать об этом городе?" << endl;
			cout << "2.Здравствуй, у меня появилась небольшая проблема с моим мечом,поможешь?" << endl;
			cout << "3.Здравствуй, спасибо нет, просто гуляю и осматриваю территорию." << endl;
			cout << "4.Здравствуй Олдрик, прости меня. Я был под сильной илюзией и случайно истребил твою семью" << endl;

			cin >> switch_answ;
			switch (switch_answ)
			{

			case 1:
				cout << "Конечно, в этом городе очень много чего происходит. Ночью тут было слишком опасно из-за разбойников, так что не советую гулять в темное время суток.\n Но из-за того что недавно на нашу деревню напал  дракон,сейчас все помогают друг другу..." << endl;
				break;

			case 2:
				cout << "Ты правильно сделал, что обратился именно ко мне. Дай-ка я посмотрю что с ним." << endl;
				Sleep(200);
				cout << "Мгм, что-же... Я понял всю проблему твоего меча, хочешь починить его сейчас? " << endl;
				cout << "1.Да\n 2.Нет спасибо я пока еще похожу,если что вернусь" << endl;
				cin >> answer;

				if (answer == 1) {
					cout << "Отлично!с тебя 370 золотых " << endl;

					cout << "1.Спокойно заплатить\n2.пригрозить и не заплатить ему" << endl;
					cin >> answer;
					if (answer == 1) {
						cout << "Благодарю,скоро верну вам меч" << endl;
					}
					if (answer == 2) {
						cout << "СТРАЖА, помогите мне!" << endl;
					}

				}

				if (answer == 2) {

					cout << "Олдрик хорошо буду вас ждать" << myName << " до свидания!" << endl;
				}
				break;

			case 3:
				cout << "Олдрик хорошо,но если что заходи,могу продать или починить тебе оборудование" << endl;
				break;

			case 4:
				cout << "Олдрик: Это же ведь шутка?" << endl;
				cout << "1.Нет,прости...\n 2.Конечно!" << endl;
				cin >> answer2;
				if (answer2 == 1) {
					cout << "За что? Почему именно моя семья? Я тебе это не прощу!" << endl;
					if (force < 4) {
						cout << "УМРИ!" << endl;
					}
					else {
						cout << "Я ВИЖУ ЧТО ТЫ НЕ СЛАБАК, НО И Я НЕ ПРОМАХ.ЗАЩИЩАЙСЯ!!" << endl;
					}
				}
				else
					cout << "НЕ УХОДИ ОТ ТЕМЫ" << endl;
				break;
			default:
				cout << "Извините, я не понимаю этот язык" << endl;
				break;
			}
		}
	}
	else if(id==2){
		do {
			cout << "Старейшина деревни: На нашу деревню напал древний дракон. " << endl;
			cout << "1. Я смогу тебе помочь с этим." << endl;
			cout << "2. Расскажи, как всё было?" << endl;
			cout << "3. Я не стану вам помогать..." << endl;
			cin >> switch_answ_2;
			switch (switch_answ_2)
			{
			case 1:
				cout << "Хорошо, что наша деревня нашла сильного и достойного внутри человека." << endl;
				break;
			case 2:
				cout << "Тёмные колдуны в нашей деревне, которые скрываются в нашей деревне, призвали сюда это зло. Неизвестно, что послужило их целью, но погибло уже семь человек." << endl;
					break;
			case 3:
				cout << "Ты не сильный и достойный человек в нашей деревне... Лучше тебе уйти отсюда...Трус." << endl;
				break;

			default:
				cout << "Я не понимаю, что ты хочешь мне донести..." << endl;
				break;
			}
		} while (switch_answ_2 == 2);
		cout << "Вы победили дракона..." << endl;
		Sleep(2000);
}
	} 

int main() {
	setlocale(0, "ru");
	NPC Oldrick("Oldrick", 1);
	Oldrick.dialogue();
	NPC Elder_Villages("Elder_Villages", 2);
	Elder_Villages.dialogue();
}