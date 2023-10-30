#include <iostream>
#include <string>

int main() {
    int NUM, I, RESUL;
    std::string linea;

    std::cout << "Digite un numero: ";
    std::cin >> linea;
    NUM = std::stoi(linea);

    I = 1;

    while (I <= 12) {
        RESUL = NUM * I;
        std::cout << NUM << " x " << I << " = " << RESUL << std::endl;
        I = I + 1;
    }

    std::cout << "Pulse una tecla: ";
    std::cin.get(); // Wait for user input
    return 0;
}