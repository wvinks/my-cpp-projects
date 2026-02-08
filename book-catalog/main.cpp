#include <iostream>
#include <limits>
#include <string>

int main() {
    std::cout << "                            " << std::endl;
    std::cout << "╔══════════════════════════╗" << std::endl;
    std::cout << "║ Welcome to Book Catalog! ║" << std::endl;
    std::cout << "╚══════════════════════════╝" << std::endl;
    std::cout << "                            " << std::endl;

    int choice;

    struct Book {
        std::string title;
        std::string author;
        int year;
    };

    Book books[100];
    int books_count = 0;


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

        std::cin.ignore();

        std::cout << "Enter the title of the book: ";
        std::getline(std::cin, books[books_count].title);

        std::cout << "Enter the author of the book: ";
        std::getline(std::cin, books[books_count].author);

        std::cout << "Enter the year the book was published: ";
        std::cin >> books[books_count].year;

        books_count++;
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
