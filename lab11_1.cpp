#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::cout << "Press Enter 3 times to reveal your future." << std::endl;
    std::cin.get();
    std::cin.get();
    std::cin.get();

    srand(static_cast<unsigned int>(time(0)));
    int prediction = rand() % 9;

    switch (prediction) {
        case 0: std::cout << "You will get A in this 261102." << std::endl; break;
        case 1: std::cout << "You will get B+ in this 261102." << std::endl; break;
        case 2: std::cout << "You will get B in this 261102." << std::endl; break;
        case 3: std::cout << "You will get C+ in this 261102." << std::endl; break;
        case 4: std::cout << "You will get C in this 261102." << std::endl; break;
        case 5: std::cout << "You will get D+ in this 261102." << std::endl; break;
        case 6: std::cout << "You will get D in this 261102." << std::endl; break;
        case 7: std::cout << "You will get F in this 261102." << std::endl; break;
        case 8: std::cout << "You will get W in this 261102." << std::endl; break;
    }

    return 0;
}
