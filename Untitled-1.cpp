// Цей варінт коду оптимізований за допомогою deepseek 
#include <string>
#include <iostream>

using namespace std;

float Total_Cost = 0;
int answer[10] = { 0 }; // Масив для зберігання вибору
int quantity[10] = { 0 }; // Масив для кількості
int item_count = 0; // Лічильник вибраних товарів

void menu();

void Cat() {
    int prices[3] = { 100, 500, 350 }; // Ціни: Little , Hot latex , Big 
    string item_names[3] = { "Little ", "Hot latex ", "Big " };

    while (true) {
        cout << "\n--- item1 Catalog ---" << endl;
        cout << "1. Big  - " << prices[2] << " $" << endl;
        cout << "2. Little  - " << prices[0] << " $" << endl;
        cout << "3. Hot latex  - " << prices[1] << " $" << endl;
        cout << "4. Finish and go to menu" << endl;

        int choice;
        cout << "Your choice (1-4): ";
        cin >> choice;

        if (choice == 4) {
            break; // Вихід із циклу вибору
        }

        if (choice < 1 || choice > 3) {
            cout << "Invalid choice! Try again." << endl;
            continue;
        }

        int qty;
        cout << "How many? ";
        cin >> qty;

        // Зберігаємо вибір
        answer[item_count] = choice;
        quantity[item_count] = qty;
        item_count++;

        // Питаємо, чи хоче користувач ще щось додати
        char more;
        cout << "Do you want to add more items? (Y/N): ";
        cin >> more;

        if (toupper(more) != 'Y') {
            break;
        }
    }

    // Розрахунок загальної вартості
    Total_Cost = 0;
    for (int i = 0; i < item_count; i++) {
        int item_index = answer[i] - 1; // Переводимо вибір у індекс масиву
        Total_Cost += prices[item_index] * quantity[i];
    }

    // Вивід підсумку
    cout << "\n--- Your Order ---" << endl;
    for (int i = 0; i < item_count; i++) {
        int item_index = answer[i] - 1;
        cout << item_names[item_index] << " x " << quantity[i]
            << " = " << prices[item_index] * quantity[i] << " $" << endl;
    }
    cout << "Total: " << Total_Cost << " $" << endl;

    // Повернення в меню
    cout << "\nReturning to the main menu..." << endl;
    menu();
}

void menu() {
    cout << "\n--- Main Menu ---" << endl;
    cout << "1. Food" << endl;
    cout << "2. Toys" << endl;
    cout << "3. item1" << endl;
    cout << "4. Exit" << endl;

    int choice;
    cout << "Your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Food section is under construction!" << endl;
        menu();
        break;
    case 2:
        cout << "Toys section is under construction!" << endl;
        menu();
        break;
    case 3:
        Cat();
        break;
    case 4:
        cout << "Goodbye!" << endl;
        exit(0);
    default:
        cout << "Invalid choice! Try again." << endl;
        menu();
    }
}

int main() {
    menu();
    return 0;
}
