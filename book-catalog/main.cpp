#include <iostream>
#include <limits>
#include <string>

void showMenu() {
    std::cout << "                                     \n";
    std::cout << "Choose the desired action            \n";
    std::cout << "                                     \n";
    std::cout << "1. Add book                          \n";
    std::cout << "2. Show books                        \n";
    std::cout << "0. Exit                              \n";
    std::cout << "                                     \n";
}

struct Book {
        std::string title;
        std::string author;
        int year;
};

void addBook (Book books[], int& books_count) {

        if (books_count >= 100) {
            std::cout << "Catalog is full! Maybe you want to view all available books?" << std::endl;
        }

        else {

              std::cout << "Enter the title of the book: ";
              std::getline(std::cin, books[books_count].title);

              std::cout << "Enter the author of the book: ";
              std::getline(std::cin, books[books_count].author);

              std::cout << "Enter the year the book was published: ";
              while (true) {
                     std::cin >> books[books_count].year;

                     if (std::cin.fail()) {
                         std::cout << "Error! Please enter a number. \n";
                         std::cout << "------------------------------\n";
                         std::cin.clear();
                         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                     }

                     else {
                          break;
                     }

              std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
              }

              books_count++;

                  std::cout << "                                        \n";
                  std::cout << "Book successfully added to the catalog! \n";
       }
}

void showBooks (Book books[], int books_count) {
                if (books_count == 0) {
                    std::cout << "There are no books yet. But you can fix that =) \n";
                }

                else {
                     for (int i = 0; i < books_count; i++) {
                          std::cout << "       \n";
                          std::cout << "Title: " << books[i].title << "\n";
                          std::cout << "Author: " << books[i].author << "\n";
                          std::cout << "Year: " << books[i].year << "\n";
                     }
                }
}


int main() {
    std::cout << "                            " << std::endl;
    std::cout << "╔══════════════════════════╗" << std::endl;
    std::cout << "║ Welcome to Book Catalog! ║" << std::endl;
    std::cout << "╚══════════════════════════╝" << std::endl;
    std::cout << "                            " << std::endl;

    int choice;

    Book books[100];
    int books_count = 0;

    do {

       showMenu();

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

       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (choice == 1) {
        addBook(books, books_count);
    }

    else if (choice == 2) {
             showBooks(books, books_count);
    }

    else if (choice == 0) {
             std::cout << "Goodbye! \n";
    }

    else {
         std::cout << "Invalid choice \n";
         std::cout << "-------------- \n";
    }
    } while (choice != 0);

return 0;
}

