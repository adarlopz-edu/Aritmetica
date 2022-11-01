#include <iostream>

using namespace std;

int main() {
    int num1, num2; char op;
    cout << "Elige una operacion, para ello escribe su letra: ";
    cout << "1. Suma; \n 2. Resta; \n 3. Multiplicacion; \n 4. Division.";
    switch (op) {
    case '1':
        cout << "Suma ";
        cout << "Escribe un numero : ";cin >> num1;
        cout << "Escribe otro numero : "; cin >> num2;
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '2':
        cout << "Resta ";
        cout << "Escribe un numero : ";cin >> num1;
        cout << "Escribe otro numero : "; cin >> num2;
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '3':
        cout << "Multiplicacion ";
        cout << "Escribe un numero : ";cin >> num1;
        cout << "Escribe otro numero : "; cin >> num2;
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '4':
        cout << "Division ";
        cout << "Escribe un numero : ";cin >> num1;
        cout << "Escribe otro numero : "; cin >> num2;
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    default:
        cout << "Escribe un valor correcto";
    }
}