﻿// Online store.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>  //сделать описание для каждого товара
using namespace std;
int vibor; //переменная для ввода различных цифр
class povsednev { //повседневная
public:
	povsednev() {

		system("cls");

		cout << "Раздел повседневной одежды: " << endl;
		cout << "джинсовый комбинезон(1)" << endl << "платье(2)" << endl << "футболка(3)" << endl;
		cin >> vibor;
		switch (vibor) {
		case 1: {
			kombez();
			break;
		}
		case 2: {
			dress();
			break;
		}
		case 3: {
			tShirt();
			break;
		}
		}
	}

	void kombez() {	//джинсовый комбинезон
		cout << "	Джинсовый комбинезон	" << endl;
		cout << "Описание: " << endl << "Джинсовый комбинезон на лямках. Модель выполнена из приятной джинсовой ткани." << endl << " Прекрасный вариант для дневного образа." << endl;

	}
	void dress() {	//платье
		cout << "	Платье	" << endl;
		cout << "Описание: " << endl << "Шикарное повсидневное платье, оно хорошо подходит как для создания повседневных луков, так и для особых случаев." << endl;
	}
	void tShirt() {	//футболка
		cout << "	Футболка	" << endl;
		cout << "Описание: " << endl << "Футболка из легкого хлопкового полотна. Изделие с округлым вырезом горловины," << endl << " украшено оригинальной вышевкой" << endl;
	}


private:

};
class ofis { //офисная
public:
	ofis() {
		system("cls");

		cout << "Раздел офисной одежды: " << endl;
		cout << "рубашка(1)" << endl << "пиджак(2)" << endl << "юбка(3)" << endl;
		cin >> vibor;
		switch (vibor) {
		case 1: {
			shirt();
			break;
		}
		case 2: {
			jacket();
			break;
		}
		case 3: {
			skirt();
			break;
		}
		}
	}
	void shirt() {	//рубашка
		cout << "	Рубашка	" << endl;
		cout << "Описание: " << endl << "Классическая белая рубашка свободного кроя идеально подойдет к вашему гардеробу." << endl;
	}
	void jacket() {	//пиджак
		cout << "	Пиджак	" << endl;
		cout << "Описание: " << endl << "Шикарный синий пиджак, отлично подойдет в школу или офис" << endl;
	}
	void skirt() {	//юбка
		cout << "	Юбка	" << endl;
		cout << "Описание: " << endl << "Классическая, зауженная юбка карандаш. Ткань, приятная на ощупь. Идеальна для офиса." << endl;
	}

private:

};
class sport { //спортивная
public:
	sport() {

		system("cls");

		cout << "Раздел спортивной одежды: " << endl;
		cout << "спортивные штаны(1)" << endl << "топ(2)" << endl << "ласины(3)" << endl;
		cin >> vibor;
		switch (vibor) {
		case 1: {
			trousers();
			break;
		}
		case 2: {
			Top();
			break;
		}
		case 3: {
			Lasin();
			break;
		}
		}
	}
	void trousers() {	//спортивные штаны
		cout << "	Спортивные штаны	" << endl;
		cout << "Описание: " << endl << "Если вы решили заниматься спортом, то вам не обойтись без наших спортивных штанов. Они выполнены из хорошей ткани, которая заслуживает внимания. " << endl;
	}
	void Top() {	//топ
		cout << "	Топ	" << endl;
		cout << "Описание: " << endl << "Спортивный женский топ- это прекрастное дополнение для штанов. " << endl << "Он очень удобен для занятий спортом, как в маленьком, так и во взрослом возросте." << endl;
	}
	void Lasin() {	//ласины
		cout << "	Ласины	" << endl;
		cout << "Описание: " << endl << "Спортивные ласины из хорошей ткани. Идеально подходят для спорта." << endl << " Удобные и практичные они обязательно принесут желаемый успех." << endl;
	}


private:

};
class verhn { //верхняя
public:
	verhn() {
		system("cls");

		cout << "Раздел верхней одежды: " << endl;
		cout << "пальто(1)" << endl << "куртка(2)" << endl << "желетка(3)" << endl;
		cin >> vibor;
		switch (vibor) {
		case 1: {
			coat();
			break;
		}
		case 2: {
			kyrtka();
			break;
		}
		case 3: {
			jelet();
			break;
		}
		}
	}
	void coat() {	//пальто
		cout << "	Пальто	" << endl;
		cout << "Описание: " << endl << "Элегантное женское пальто- это лучший подарок и вещь которую можно носить самому. Оно очень теплое и выполнено из качественной ткани." << endl;
	}
	void kyrtka() {	//куртка
		cout << "	Куртка	" << endl;
		cout << "Описание: " << endl << "Короткая дутая куртка, которая улучшит вашу зиму. В ней удобно и практично. Ничего не будет удобнее этой куртки!" << endl;
	}
	void jelet() {	//желетка
		cout << "	Желетка	" << endl;
		cout << "Описание: " << endl << "Если вы ездиете за рулем, то это лучшее решение для вас! В желетке ничего не давит, она прекрастно сидит и выглядит." << endl;
	}

private:

};
class hat { //головные уборы
public:
	hat() {
		system("cls");

		cout << "Раздел  головных уборов: " << endl;
		cout << "теплая шапка(1)" << endl << "кепка(2)" << endl << "бандана(3)" << endl;
		cin >> vibor;
		switch (vibor) {
		case 1: {
			Hat();
			break;
		}
		case 2: {
			cap();
			break;
		}
		case 3: {
			bandana();
			break;
		}
		}
	}
	void Hat() {	//теплая шапка
		cout << "	Теплая шапка	" << endl;
		cout << "Описание: " << endl << "Зимой бывает очень холодно, поэтому чтобы защитить свои уши у нас есть для вас теплая шапка." << endl << " Она связана из шерстяных ниток и будет очень красиво выглядеть!" << endl;
	}
	void cap() {	//кепка
		cout << "	Кепка	" << endl;
		cout << "Описание: " << endl << "Летом зачастую палит жаркое солнце, чтобы от него защитится нужен головной убор!" << endl << " Для этого прекрастно подойдет кепка! Она очень стильна и удобна" << endl;
	}
	void bandana() {	//бандана
		cout << "	Бандана	" << endl;
		cout << "Описание: " << endl << "Если вас не интересуют обычные головные уборы то вам наверняка подойдет наша бандана. " << endl << "С нею можно составить много различных образов и менять их каждый день!" << endl;
	}


private:

};


int main() {
	setlocale(LC_ALL, "Russian");


	cout << "Здравствуйте, вы попали в интернет магазин одежды. Данная программа поможет вам легче сделать покупки ваших вещей!" << endl;
	cout << "Если вас не заинтересовал наш магазин, то жмите 0" << endl << "А если вы готовы делать покупки, то жмите 1 (и добро пожаловать)!" << endl;
	cin >> vibor;
	if (vibor == 1) {
		do {
			system("cls");

			cout << "каталог видов для одежды(чтобы выбрать вид или товар введите его цифру): " << endl;
			cout << "повседневная(1)" << endl << "офисная(2)" << endl << "спортивная(3)" << endl << "верхняя(4)" << endl << "головные уборы(5)" << endl; //виды
			cin >> vibor;

			switch (vibor) {
			case 1: {
				povsednev();
				break;
			}

			case 2: {
				ofis();
				break;
			}

			case 3: {
				sport();
				break;
			}

			case 4: {
				verhn();
				break;
			}

			case 5: {
				hat();
				break;
			}
			}
			if (vibor >= 6) {
				cout << "Вы ошиблись с вводом! Повторите попытку" << endl;
			}

			cout << "Повторить(1) или выйти(0)?" << endl;
			cin >> vibor;
		} while (vibor == 1);

	}

	cout << "Пока! Приходите еще!";










	return 0;
}