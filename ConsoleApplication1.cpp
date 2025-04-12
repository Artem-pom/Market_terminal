#include <iostream>
#include <string>
#include<locale>


using namespace std;
float Value, Total_Cost=0;


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

void Cat () {//3
	int answer;
	const char* m = "₴";
	std::cout << "Hello2 world\n";
	float c[3] = { 100,500,350 };//Dicks
	std::cout << "Wellcome to our page!!!" << endl;
	std::cout << "We've got this items:" << endl;
	std::cout << "(1)Big dick"<< c[2]<<endl;
    std::cout << "(2)Little pussy " << c[0]<<endl;
	std::cout << "(3)Hot latex woman "<< c[1]<<endl;
	std::cout << "Leave/n";
	cout << "Your choise:";
	cin >> answer;
	if (answer == 1) {
		Total_Cost += c[2];
		cout << Total_Cost;
	}

	else if (answer == 2) {
		Total_Cost += c[0];
		cout << Total_Cost;
	}
	else if (answer == 3) {
		Total_Cost += c[1];
		cout << Total_Cost;
	}
	else if (answer = 4) {
		menu();
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

	std::cout << "---------------------------------------------------\n";
	std::cout << "Wellcome to our pretty market\n";
	std::cout << "You can choose one of this offers :Food(1), Toys(2), Dicks(3)"<<endl;
	std::cout << "You select:";
	cin >> a;
	std::cout << "---------------------------------------------------\n";
	if (a == 1){
		std::cout << "Okay, here is our food catalog:";
		Food();
	}
	else if (a == 2) {
		std::cout << "Okay, here is our Toys catalog: ";
		Dog();
	}
	else if (a == 3) {
		std::cout << "Okay, here is our Dicks catalog:";
		Cat();
	}
	else {
		std::cout << "Sorry but this offers is not done yet"<<endl;
		std::cout << "Come back to the menu  "<<endl;
		menu();
	}
	return 0;
}




void Kebab() {
	std::cout << "Hellow world\n";

	menu();
}

