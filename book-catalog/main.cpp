#include <iostream>
#include <limits>

int main() {
    std::cout << "                            " << std::endl;
    std::cout << "╔══════════════════════════╗" << std::endl;
    std::cout << "║ Welcome to Book Catalog! ║" << std::endl;
    std::cout << "╚══════════════════════════╝" << std::endl;
    std::cout << "                            " << std::endl;

    int choice;

    do {
    std::cout << "                                     \n";
    std::cout << "Choose the desired action            \n";
    std::cout << "                                     \n";
    std::cout << "1. Add book                          \n";
    std::cout << "2. Show books                        \n";
    std::cout << "0. Exit                              \n";
    std::cout << "                                     \n";


       std::cout << "Enter the desired action (in numbers): ";
       std::cin >> choice;

       if (std::cin.fail()) {
           std::cout << "Error! You entered the wrong number. Try again.\n";
           std::cout << "-----------------------------------------------\n";
           std::cin.clear();
           std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
           choice = -1;
           continue;       
       }

    if (choice == 1) {
        std::cout << "Add book selected" << std::endl;
    }

    else if (choice == 2) {
             std::cout << "Show books selected" << std::endl;
    }

    else if (choice == 0) {
             std::cout << "Goodbye!" << std::endl;
    }

    else {
         std::cout << "Invalid choice" << std::endl;
         std::cout << "--------------" << std::endl;
    }
    } while (choice != 0);

return 0;
}
