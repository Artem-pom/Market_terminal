#include <string>
#include <iostream>

using namespace std;
float Value, Total_Cost = 0, price1 = 0, price2 = 0, price3 = 0;
int answer[3], number[4], i = 0;

void menu();
void Kebab();



void Food() {
	std::cout << "Hellow world\n";
	float c[3][3] = {
		{70.99,60.99,55.60},//Молочка
		{150.99,200.20,125.30},//Мясна продукція
		{25.20,15.30,60.40},//Хлібна продукція 
	};
	menu();
}

void Card_balance() {
	std::cout << "Hello2 world\n";
	menu();
}

void Cat() {//3

	string idi;
	bool a = true;
	int c[3] = { 100,500,350 };//
	std::cout << "Wellcome to our page!!!" << endl;
	std::cout << "We've got this items:" << endl;
	std::cout << "(1)Big  " << c[2] << endl;
	std::cout << "(2)Little  " << c[0] << endl;
	std::cout << "(3)Hot latex  " << c[1] << endl;
	std::cout << "(4)Leave" << endl;
	cout << "Your choise:";
	cin >> answer[0];
	cout << "How much?";
	cin >> number[0];
	i++;
	for (int n = 0; n < 4; n++) {
		cout << "Want choose somesing else?(Y/N):";
		cin >> idi;
		cout << endl;
		if (idi == "Y") {
			cout << "What do you want ? ";
			cin >> answer[i];
			p();
			i++;
		}
		else if (idi == "N") {
			cout << "Okay,come back to menu\n";
			a = false;
			break;
		}
		else {
			cout << "Error" << endl;
		}
	}
	a = false;
	if (a == false) {//можлива поломана логіка
		for (int h = 0; h < 4; h++) {
			switch (answer[h]) {
			case 0:
				break;
			case 1:
				price1 += c[2] * number[0];
				break;
			case 2:
				price1 += c[0] * number[1];
				break;
			case 3:
				price1 += c[1] * number[2];
				break;
			default: break;

			}
			cout << price1;
			menu();
		}
	}
}

void p() {
	switch (answer[i]) // Use answer[0] instead of answer
	{
	case 1:
		std::cout << "You selected Big .\n";
		cout << "How much?";
		cin >> number[i];
		break;
	case 2:
		std::cout << "You selected Little.\n";
		cout << "How much?";
		cin >> number[i];
		break;
	case 3:
		std::cout << "You selected Hot latex .\n";
		cout << "How much?";
		cin >> number[i];
		break;
	case 4:
		std::cout << "Exiting to menu.\n";
		menu();
		break;
	default:
		std::cout << "Invalid choice.\n";
		cout << "How much?";
		cin >> number[i];
		break;
	}
}

void Dog() {//2
	std::cout << "Hello2 world\n";
	float c[2][3] = {
	{50},//Пазли
	{150.99,200.20,125.30},//Електро іграшки
	};
	menu();
}





void menu() {
	int c;
	std::cout << "---------------------------------------------------\n";
	std::cout << "Wellcome to our pretty market\n";
	std::cout << "You can choose one of this offers :Food(1), Toys(2), Dicks(3)" << endl;
	std::cout << "You select:";
	cin >> c;
	std::cout << "---------------------------------------------------\n";
	if (c == 1) {
		std::cout << "Okay, here is our food catalog:";
		Food();
	}
	else if (c == 2) {
		std::cout << "Okay, here is our Toys catalog: ";
		Dog();
	}
	else if (c == 3) {
		std::cout << "Okay, here is our Dicks catalog:";
		Cat();
	}
	else {
		std::cout << "Sorry but this offers is not done yet" << endl;
		std::cout << "Come back to the menu  " << endl;
		menu();
	}
}


int main() {

	int a;
	cout << "Xyu";
	std::cout << "---------------------------------------------------\n";
	std::cout << "Wellcome to our pretty market\n";
	std::cout << "You can choose one of this offers :Food(1), Toys(2), item1(3)" << endl;
	std::cout << "You select:";
	cin >> a;
	std::cout << "---------------------------------------------------\n";
	if (a == 1) {
		std::cout << "Okay, here is our food catalog:";
		Food();
	}
	else if (a == 2) {
		std::cout << "Okay, here is our Toys catalog: ";
		Dog();
	}
	else if (a == 3) {
		std::cout << "Okay, here is our item1 catalog:";
		Cat();
	}
	else {
		std::cout << "Sorry but this offers is not done yet" << endl;
		std::cout << "Come back to the menu  " << endl;
		menu();
	}
	return 0;
}




void Kebab() {
	std::cout << "Hellow world\n";

	menu();
}

