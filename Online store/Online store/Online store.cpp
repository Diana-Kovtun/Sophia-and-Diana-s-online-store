// Online store.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>//сделать описание для каждого товара
#include<fstream>
#include<string>
#include<Windows.h>
#include<cmath>
using namespace std;
string mycom;
ofstream corzina;
string comment;
int summa = 0;
string nalich = "";
int cena = 0;
string buy;
int dobavit;
string name;

int vibor; //переменная для ввода различных цифр
void user() {
	cout << "Введите своё имя: ";
	cin >> name;
}
void nalichie() {
	int Nalichie = atoi(nalich.c_str());
	if (Nalichie > 0) {
	
		cout << "Есть в наличии" << endl;
	}
	else {
		
		cout << "Нет в наличии" << endl;
	}
}
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
		ifstream Komb;
		Komb.open("kombez.txt", ios_base::in);
		getline(Komb, nalich);
		int Nalichie = atoi(nalich.c_str());
		//Komb.close();
		cena = 1590;
		cout << "	Джинсовый комбинезон	" << endl;
		cout << "Описание: " << endl << "Джинсовый комбинезон на лямках. Модель выполнена из приятной джинсовой ткани." << endl << " Прекрасный вариант для дневного образа." << endl;
		cout << "Цена: " << cena << endl;
		nalichie();
		cout << "Посмотреть комментарии(2) " << "Добавить свой комментарий(3)" << endl;
		cout << "Добавить в корзину?" << endl << "Да(1)  " << "Нет(любая клавиша)" << endl;
		cin >> dobavit;
		if (dobavit == 1 && Nalichie > 0) {
			ofstream Kom;
			corzina.open("corzina.txt", ios_base::app);
			summa = summa + cena;
			buy = "Джинсовый комбинезон - ";
			corzina << buy << cena << endl;
			corzina.close();
			Nalichie--;
			Kom.open("kombez.txt", ios_base::out);
			Kom << Nalichie;
			Kom.close();
		}
		if (dobavit == 2) {
			while (getline(Komb, comment))
			{
					cout << comment<<endl;
			}
			
			Komb.close();
		}
		if (dobavit == 3) {
			user();
			ofstream mycomment;
			mycomment.open("kombez.txt", ios_base::app);
			cout << "Введите комментарий:";
			cin >> mycom;
			mycomment <<endl<<name<<": "<< mycom << endl;
			cout << "Комментарий сохранен!" << endl;
			mycomment.close();
		}
	}
	void dress() {	//платье
		ifstream Dress;
		ofstream drs;
		Dress.open("dress.txt", ios_base::in);
		getline(Dress, nalich); 
		int Nalichie = atoi(nalich.c_str());
		cena = 2599;
		cout << "	Платье	" << endl;
		cout << "Описание: " << endl << "Шикарное повсидневное платье, оно хорошо подходит как для создания повседневных луков, так и для особых случаев." << endl;
		cout << "Цена: " << cena << endl;
		nalichie();
		cout << "Посмотреть комментарии(2) " << "Добавить свой комментарий(3)" << endl;
		cout << "Добавить в корзину?" << endl << "Да(1)  " << "Нет(любая клавиша)" << endl;
		cin >> dobavit;
		if (dobavit == 1 && Nalichie > 0) {
			corzina.open("corzina.txt", ios_base::app);
			summa = summa + cena;
			buy = "Платье - ";
			corzina << buy << cena << endl;
			corzina.close();
			Nalichie--;
			drs.open("dress.txt", ios_base::out);
			drs << Nalichie;
			drs.close();
			

		}
		if (dobavit == 2) {
			while (getline(Dress, comment))
			{
				cout << comment << endl;
			}

			Dress.close();
		}
		if (dobavit == 3) {
			user();
			ofstream mycomment;
			mycomment.open("dress.txt", ios_base::app);
			cout << "Введите комментарий:";
			cin >> mycom;
			mycomment << endl << name << ": " << mycom << endl;
			cout << "Комментарий сохранен!" << endl;
			mycomment.close();
		}
	}
	void tShirt() {	//футболка
		ifstream Tshirt;
		Tshirt.open("tShirt.txt", ios_base::in);
		getline(Tshirt, nalich);
		int Nalichie = atoi(nalich.c_str());
		cena = 1800;
		cout << "	Футболка	" << endl;
		cout << "Описание: " << endl << "Футболка из легкого хлопкового полотна. Изделие с округлым вырезом горловины," << endl << " украшено оригинальной вышевкой" << endl;
		cout << "Цена: " << cena << endl;
		nalichie();
		cout << "Посмотреть комментарии(2) " << "Добавить свой комментарий(3)" << endl;
		cout << "Добавить в корзину?" << endl << "Да(1)  " << "Нет(любая клавиша)" << endl;
		cin >> dobavit;
		if (dobavit == 1 && Nalichie > 0) {
			ofstream Tsh;
			corzina.open("corzina.txt", ios_base::app);
			summa = summa + cena;
			buy = "Футболка - ";
			corzina << buy << cena << endl;
			corzina.close();
			Nalichie--;
			Tsh.open("tShirt.txt", ios_base::out);
			Tsh << Nalichie;
			Tsh.close();
		}
		if (dobavit == 2) {
			while (getline(Tshirt, comment))
			{
				cout << comment << endl;
			}

			Tshirt.close();
		}
		if (dobavit == 3) {
			user();
			ofstream mycomment;
			mycomment.open("tShirt.txt", ios_base::app);
			cout << "Введите комментарий:";
			cin >> mycom;
			mycomment << endl << name << ": " << mycom << endl;
			cout << "Комментарий сохранен!" << endl;
			mycomment.close();
		}
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
		ifstream Shirt;
		Shirt.open("shirt.txt", ios_base::in);
		getline(Shirt, nalich);
		int Nalichie = atoi(nalich.c_str());
		cena = 4000;
		cout << "	Рубашка	" << endl;
		cout << "Описание: " << endl << "Классическая белая рубашка свободного кроя идеально подойдет к вашему гардеробу." << endl;
		cout << "Цена: " << cena << endl;
		nalichie();
		cout << "Посмотреть комментарии(2) " << "Добавить свой комментарий(3)" << endl;
		cout << "Добавить в корзину?" << endl << "Да(1)  " << "Нет(любая клавиша)" << endl;
		cin >> dobavit;
		if (dobavit == 1 && Nalichie > 0) {
			ofstream sh;
			corzina.open("corzina.txt", ios_base::app);
			summa = summa + cena;
			buy = "Рубашка - ";
			corzina << buy << cena << endl;
			corzina.close();
			Nalichie--;
			sh.open("shirt.txt", ios_base::out);
			sh << Nalichie;
			sh.close();
		}
		if (dobavit == 2) {
			while (getline(Shirt, comment))
			{
				cout << comment << endl;
			}

			Shirt.close();
		}
		if (dobavit == 3) {
			user();
			ofstream mycomment;
			mycomment.open("shirt.txt", ios_base::app);
			cout << "Введите комментарий:";
			cin >> mycom;
			mycomment << endl << name << ": " << mycom << endl;
			cout << "Комментарий сохранен!" << endl;
			mycomment.close();
		}
	}
	void jacket() {	//пиджак
		ifstream Jacket;
		Jacket.open("jacket.txt", ios_base::in);
		getline(Jacket, nalich);
		int Nalichie = atoi(nalich.c_str());
		cena = 4990;
		cout << "	Пиджак	" << endl;
		cout << "Описание: " << endl << "Шикарный синий пиджак, отлично подойдет в школу или офис" << endl;
		cout << "Цена: " << cena << endl;
		nalichie();
		cout << "Посмотреть комментарии(2) " << "Добавить свой комментарий(3)" << endl;
		cout << "Добавить в корзину?" << endl << "Да(1)  " << "Нет(любая клавиша)" << endl;
		cin >> dobavit;
		if (dobavit == 1 && Nalichie > 0) {
			ofstream jack;
			corzina.open("corzina.txt", ios_base::app);
			summa = summa + cena;
			buy = "Пиджак - ";
			corzina << buy << cena << endl;
			corzina.close();
			Nalichie--;
			jack.open("jacket.txt", ios_base::out);
			jack << Nalichie;
			jack.close();
		}
		if (dobavit == 2) {
			while (getline(Jacket, comment))
			{
				cout << comment << endl;
			}

			Jacket.close();
		}
		if (dobavit == 3) {
			user();
			ofstream mycomment;
			mycomment.open("jacket.txt", ios_base::app);
			cout << "Введите комментарий:";
			cin >> mycom;
			mycomment << endl << name << ": " << mycom << endl;
			cout << "Комментарий сохранен!" << endl;
			mycomment.close();
		}
	}
	void skirt() {	//юбка
		ifstream Skirt;
		Skirt.open("skirt.txt", ios_base::in);
		getline(Skirt, nalich);
		int Nalichie = atoi(nalich.c_str());
		cena = 3000;
		cout << "	Юбка	" << endl;
		cout << "Описание: " << endl << "Классическая, зауженная юбка карандаш. Ткань, приятная на ощупь. Идеальна для офиса." << endl;
		cout << "Цена: " << cena << endl;
		nalichie();
		cout << "Посмотреть комментарии(2) " << "Добавить свой комментарий(3)" << endl;
		cout << "Добавить в корзину?" << endl << "Да(1)  " << "Нет(любая клавиша)" << endl;
		cin >> dobavit;
		if (dobavit == 1 && Nalichie > 0) {
			ofstream Sk;
			corzina.open("corzina.txt", ios_base::app);
			summa = summa + cena;
			buy = "Юбка - ";
			corzina << buy << cena << endl;
			corzina.close();
			Nalichie--;
			Sk.open("skirt.txt", ios_base::out);
			Sk << Nalichie;
			Sk.close();
		}
		if (dobavit == 2) {
			while (getline(Skirt, comment))
			{
				cout << comment << endl;
			}

			Skirt.close();
		}
		if (dobavit == 3) {
			user();
			ofstream mycomment;
			mycomment.open("skirt.txt", ios_base::app);
			cout << "Введите комментарий:";
			cin >> mycom;
			mycomment << endl << name << ": " << mycom << endl;
			cout << "Комментарий сохранен!" << endl;
			mycomment.close();
		}
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


	void trousers() {//спортивные штаны
		ifstream Trousers;
		Trousers.open("trousers.txt", ios_base::in);
		getline(Trousers, nalich);
		int Nalichie = atoi(nalich.c_str());
		cena = 2990;
		cout << "	Спортивные штаны	" << endl;
		cout << "Описание: " << endl << "Если вы решили заниматься спортом, то вам не обойтись без наших спортивных штанов. Они выполнены из хорошей ткани, которая заслуживает внимания. " << endl;
		cout << "Цена: " << cena << endl;
		nalichie();
		cout << "Посмотреть комментарии(2) " << "Добавить свой комментарий(3)" << endl;
		cout << "Добавить в корзину?" << endl << "Да(1)  " << "Нет(любая клавиша)" << endl;
		cin >> dobavit;
		if (dobavit == 1 && Nalichie > 0) {
			ofstream Tr;
			corzina.open("corzina.txt", ios_base::app);
			summa = summa + cena;
			buy = "Спортивные штаны - ";
			corzina << buy << cena << endl;
			corzina.close();
			Nalichie--;
			Tr.open("trousers.txt", ios_base::out);
			Tr << Nalichie;
			Tr.close();
		}
		if (dobavit == 2) {
			while (getline(Trousers, comment))
			{
				cout << comment << endl;
			}

			Trousers.close();
		}
		if (dobavit == 3) {
			user();
			ofstream mycomment;
			mycomment.open("trousers.txt", ios_base::app);
			cout << "Введите комментарий:";
			cin >> mycom;
			mycomment << endl << name << ": " << mycom << endl;
			cout << "Комментарий сохранен!" << endl;
			mycomment.close();
		}
	}
	void Top() {	//топ
		ifstream top;
		top.open("Top.txt", ios_base::in);
		getline(top, nalich);
		int Nalichie = atoi(nalich.c_str());
		cena = 1579;
		cout << "	Топ	" << endl;
		cout << "Описание: " << endl << "Спортивный женский топ- это прекрастное дополнение для штанов. " << endl << "Он очень удобен для занятий спортом, как в маленьком, так и во взрослом возросте." << endl;
		cout << "Цена: " << cena << endl;
		nalichie();
		cout << "Посмотреть комментарии(2) " << "Добавить свой комментарий(3)" << endl;
		cout << "Добавить в корзину?" << endl << "Да(1)  " << "Нет(любая клавиша)" << endl;
		cin >> dobavit;
		if (dobavit == 1 && Nalichie > 0) {
			ofstream tp;
			corzina.open("corzina.txt", ios_base::app);
			summa = summa + cena;
			buy = "Топ - ";
			corzina << buy << cena << endl;
			corzina.close();
			Nalichie--;
			tp.open("Top.txt", ios_base::out);
			tp << Nalichie;
			tp.close();
		}
		if (dobavit == 2) {
			while (getline(top, comment))
			{
				cout << comment << endl;
			}

			top.close();
		}
		if (dobavit == 3) {
			user();
			ofstream mycomment;
			mycomment.open("Top.txt", ios_base::app);
			cout << "Введите комментарий:";
			cin >> mycom;
			mycomment << endl << name << ": " << mycom << endl;
			cout << "Комментарий сохранен!" << endl;
			mycomment.close();
		}
	}
	void Lasin() {	//ласины
		ifstream lasin;
		lasin.open("Lasin.txt", ios_base::in);
		getline(lasin, nalich);
		int Nalichie = atoi(nalich.c_str());
		cena = 1090;
		cout << "	Ласины	" << endl;
		cout << "Описание: " << endl << "Спортивные ласины из хорошей ткани. Идеально подходят для спорта." << endl << " Удобные и практичные они обязательно принесут желаемый успех." << endl;
		cout << "Цена: " << cena << endl;
		nalichie();
		cout << "Посмотреть комментарии(2) " << "Добавить свой комментарий(3)" << endl;
		cout << "Добавить в корзину?" << endl << "Да(1)  " << "Нет(любая клавиша)" << endl;
		cin >> dobavit;
		if (dobavit == 1 && Nalichie > 0) {
			ofstream las;
			corzina.open("corzina.txt", ios_base::app);
			summa = summa + cena;
			buy = "Ласины - ";
			corzina << buy << cena << endl;
			corzina.close();
			Nalichie--;
			las.open("Lasin.txt", ios_base::out);
			las << Nalichie;
			las.close();
		}
		if (dobavit == 2) {
			while (getline(lasin, comment))
			{
				cout << comment << endl;
			}

			lasin.close();
		}
		if (dobavit == 3) {
			user();
			ofstream mycomment;
			mycomment.open("Lasin.txt", ios_base::app);
			cout << "Введите комментарий:";
			cin >> mycom;
			mycomment << endl << name << ": " << mycom << endl;
			cout << "Комментарий сохранен!" << endl;
			mycomment.close();
		}
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
		ifstream Coat;
		Coat.open("coat.txt", ios_base::in);
		getline(Coat, nalich);
		int Nalichie = atoi(nalich.c_str());
		cena = 7800;
		cout << "	Пальто	" << endl;
		cout << "Описание: " << endl << "Элегантное женское пальто- это лучший подарок и вещь которую можно носить самому. Оно очень теплое и выполнено из качественной ткани." << endl;
		cout << "Цена: " << cena << endl;
		nalichie();
		cout << "Посмотреть комментарии(2) " << "Добавить свой комментарий(3)" << endl;
		cout << "Добавить в корзину?" << endl << "Да(1)  " << "Нет(любая клавиша)" << endl;
		cin >> dobavit;
		if (dobavit == 1&& Nalichie > 0) {
			ofstream ct;
			corzina.open("corzina.txt", ios_base::app);
			summa = summa + cena;
			buy = "Пальто - ";
			corzina << buy << cena << endl;
			corzina.close();
			Nalichie--;
			ct.open("coat.txt", ios_base::out);
			ct << Nalichie;
			ct.close();
		}
		if (dobavit == 2) {
			while (getline(Coat, comment))
			{
				cout << comment << endl;
			}

			Coat.close();
		}
		if (dobavit == 3) {
			user();
			ofstream mycomment;
			mycomment.open("coat.txt", ios_base::app);
			cout << "Введите комментарий:";
			cin >> mycom;
			mycomment << endl << name << ": " << mycom << endl;
			cout << "Комментарий сохранен!" << endl;
			mycomment.close();
		}
	}
	void kyrtka() {	//куртка
		ifstream Kyrtka;
		Kyrtka.open("kyrtka.txt", ios_base::in);
		getline(Kyrtka, nalich);
		int Nalichie = atoi(nalich.c_str());
		cena = 6000;
		cout << "	Куртка	" << endl;
		cout << "Описание: " << endl << "Короткая дутая куртка, которая улучшит вашу зиму. В ней удобно и практично. Ничего не будет удобнее этой куртки!" << endl;
		cout << "Цена: " << cena << endl;
		nalichie();
		cout << "Посмотреть комментарии(2) " << "Добавить свой комментарий(3)" << endl;
		cout << "Добавить в корзину?" << endl << "Да(1)  " << "Нет(любая клавиша)" << endl;
		cin >> dobavit;
		if (dobavit == 1&&Nalichie > 0) {
			ofstream kyrt;
			corzina.open("corzina.txt", ios_base::app);
			summa = summa + cena;
			buy = "Куртка - ";
			corzina << buy << cena << endl;
			corzina.close();
			Nalichie--;
			kyrt.open("kyrtka.txt", ios_base::out);
			kyrt << Nalichie;
			kyrt.close();
		}
		if (dobavit == 2) {
			while (getline(Kyrtka, comment))
			{
				cout << comment << endl;
			}

			Kyrtka.close();
		}
		if (dobavit == 3) {
			user();
			ofstream mycomment;
			mycomment.open("kyrtka.txt", ios_base::app);
			cout << "Введите комментарий:";
			cin >> mycom;
			mycomment << endl << name << ": " << mycom << endl;
			cout << "Комментарий сохранен!" << endl;
			mycomment.close();
		}
	}
	void jelet() {	//желетка
		ifstream Jelet;
		Jelet.open("jelet.txt", ios_base::in);
		getline(Jelet, nalich);
		int Nalichie = atoi(nalich.c_str());
		cena = 3990;
		cout << "	Желетка	" << endl;
		cout << "Описание: " << endl << "Если вы ездиете за рулем, то это лучшее решение для вас! В желетке ничего не давит, она прекрастно сидит и выглядит." << endl;
		cout << "Цена: " << cena << endl;
		nalichie();
		cout << "Посмотреть комментарии(2) " << "Добавить свой комментарий(3)" << endl;
		cout << "Добавить в корзину?" << endl << "Да(1)  " << "Нет(любая клавиша)" << endl;
		cin >> dobavit;
		if (dobavit == 1 && Nalichie > 0) {
			ofstream jel;
			corzina.open("corzina.txt", ios_base::app);
			summa = summa + cena;
			buy = "Желетка - ";
			corzina << buy << cena << endl;
			corzina.close();
			Nalichie--;
			jel.open("jelet.txt", ios_base::out);
			jel << Nalichie;
			jel.close();
		}
		if (dobavit == 2) {
			while (getline(Jelet, comment))
			{
				cout << comment << endl;
			}

			Jelet.close();
		}
		if (dobavit == 3) {
			user();
			ofstream mycomment;
			mycomment.open("jelet.txt", ios_base::app);
			cout << "Введите комментарий:";
			cin >> mycom;
			mycomment << endl << name << ": " << mycom << endl;
			cout << "Комментарий сохранен!" << endl;
			mycomment.close();
		}
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
		ifstream Ht;
		Ht.open("Hat.txt", ios_base::in);
		getline(Ht, nalich);
		int Nalichie = atoi(nalich.c_str());
		cena = 499;
		cout << "	Теплая шапка	" << endl;
		cout << "Описание: " << endl << "Зимой бывает очень холодно, поэтому чтобы защитить свои уши у нас есть для вас теплая шапка." << endl << " Она связана из шерстяных ниток и будет очень красиво выглядеть!" << endl;
		cout << "Цена: " << cena << endl;
		nalichie();
		cout << "Посмотреть комментарии(2) " << "Добавить свой комментарий(3)" << endl;
		cout << "Добавить в корзину?" << endl << "Да(1)  " << "Нет(любая клавиша)" << endl;
		cin >> dobavit;
		if (dobavit == 1 && Nalichie > 0) {
			ofstream ht;
			corzina.open("corzina.txt", ios_base::app);
			summa = summa + cena;
			buy = "Теплая шапка - ";
			corzina << buy << cena << endl;
			corzina.close();
			Nalichie--;
			ht.open("Hat.txt", ios_base::out);
			ht << Nalichie;
			ht.close();
		}
		if (dobavit == 2) {
			while (getline(Ht, comment))
			{
				cout << comment << endl;
			}

			Ht.close();
		}
		if (dobavit == 3) {
			user();
			ofstream mycomment;
			mycomment.open("Hat.txt", ios_base::app);
			cout << "Введите комментарий:";
			cin >> mycom;
			mycomment << endl << name << ": " << mycom << endl;
			cout << "Комментарий сохранен!" << endl;
			mycomment.close();
		}
	}
	void cap() {	//кепка
		ifstream Cap;
		Cap.open("cap.txt", ios_base::in);
		getline(Cap, nalich);
		int Nalichie = atoi(nalich.c_str());
		cena = 990;
		cout << "	Кепка	" << endl;
		cout << "Описание: " << endl << "Летом зачастую палит жаркое солнце, чтобы от него защитится нужен головной убор!" << endl << " Для этого прекрастно подойдет кепка! Она очень стильна и удобна" << endl;
		cout << "Цена: " << cena << endl;
		nalichie();
		cout << "Посмотреть комментарии(2) " << "Добавить свой комментарий(3)" << endl;
		cout << "Добавить в корзину?" << endl << "Да(1)  " << "Нет(любая клавиша)" << endl;
		cin >> dobavit;
		if (dobavit == 1 && Nalichie > 0) {
			ofstream cp;
			corzina.open("corzina.txt", ios_base::app);
			summa = summa + cena;
			buy = "Кепка - ";
			corzina << buy << cena << endl;
			corzina.close();
			Nalichie--;
			cp.open("cap.txt", ios_base::out);
			cp << Nalichie;
			cp.close();
		}
		if (dobavit == 2) {
			while (getline(Cap, comment))
			{
				cout << comment << endl;
			}

			Cap.close();
		}
		if (dobavit == 3) {
			user();
			ofstream mycomment;
			mycomment.open("cap.txt", ios_base::app);
			cout << "Введите комментарий:";
			cin >> mycom;
			mycomment << endl << name << ": " << mycom << endl;
			cout << "Комментарий сохранен!" << endl;
			mycomment.close();
		}
	}
	void bandana() {	//бандана
		ifstream Bandan;
		Bandan.open("bandana.txt", ios_base::in);
		getline(Bandan, nalich);
		int Nalichie = atoi(nalich.c_str());
		cena = 590;
		cout << "	Бандана	" << endl;
		cout << "Описание: " << endl << "Если вас не интересуют обычные головные уборы то вам наверняка подойдет наша бандана. " << endl << "С нею можно составить много различных образов и менять их каждый день!" << endl;
		cout << "Цена: " << cena << endl;
		nalichie();
		cout << "Посмотреть комментарии(2) " << "Добавить свой комментарий(3)" << endl;
		cout << "Добавить в корзину?" << endl << "Да(1)  " << "Нет(любая клавиша)" << endl;
		cin >> dobavit;
		if (dobavit == 1 && Nalichie > 0) {
			ofstream ban;
			corzina.open("corzina.txt", ios_base::app);
			summa = summa + cena;
			buy = "Бандана - ";
			corzina << buy << cena << endl;
			corzina.close();
			Nalichie--;
			ban.open("bandana.txt", ios_base::out);
			ban << Nalichie;
			ban.close();
		}
		if (dobavit == 2) {
			while (getline(Bandan, comment))
			{
				cout << comment << endl;
			}

			Bandan.close();
		}
		if (dobavit == 3) {
			user();
			ofstream mycomment;
			mycomment.open("bandana.txt", ios_base::app);
			cout << "Введите комментарий:";
			cin >> mycom;
			mycomment << endl << name << ": " << mycom << endl;
			cout << "Комментарий сохранен!" << endl;
			mycomment.close();
		}
	}


private:

};
class Corzina {
public:
	string pocupki = "";
	Corzina() {
		ifstream corz;
		fstream corzina1;
		corz.open("corzina.txt", ios_base::in);
		while (getline(corz, pocupki)) {
			cout << pocupki << endl;
		};
		cout << "Всего: " << summa<<endl;
		corz.close();
		int end;
		cout << "Завершить покупку?" << endl << "Да(1) " << "Нет(любая клавиша)" << endl;
		cin >> end;
		if (end == 1) {
			cout << "Спасибо за покупку!" << endl;
			corzina1.open("corzina.txt", ios_base::out);
			corzina1.close();
			summa = 0;
		}
	}



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
			cout << "повседневная(1)" << endl << "офисная(2)" << endl << "спортивная(3)" << endl << "верхняя(4)" << endl << "головные уборы(5)" << endl;//виды
			cout << "моя корзина(6)" << endl;
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
			case 6: {
				Corzina();
				break;
			}
			}
			if (vibor > 6) {
				cout << "Вы ошиблись с вводом! Повторите попытку" << endl;
			}

			cout << "Повторить(1) или выйти(0)?" << endl;
			cin >> vibor;
		} while (vibor == 1);

	}

	cout << "Пока! Приходите еще!";









	return 0;
}