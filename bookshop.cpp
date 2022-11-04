//
// Created by Haoxiang Zhang on 8/11/22.
//
#include "Book.h"

using namespace std;

void printMenu() {
    cout << "\n\n\t\tMenu" << endl
         << "1. Entry of New Book" << endl
         << "2. Buy a Book" << endl
         << "3. Search for Book" << endl
         << "4. Edit Details of Book" << endl
         << "5. Exit" << endl
         << "\n\nEnter your choice (1-5):\t";
}

int main () {
    // total 20 books
    Book* book[20];

    int totalNumOfBook = 0;
    int choice; // choice from the menu

    char titleBuy[20], authorBuy[20];

    while (true) {
        printMenu();
        cin >> choice;

        if (choice <= 0 || choice > 5) {
            cout << "Invalid Choice, please enter number 1 - 5." << endl;
            continue;
        }

        // Entry of New Book
        if (choice == 1) {
            book[totalNumOfBook] = new Book();
            book[totalNumOfBook]->feeddata();

            cout << "The new book information: " << endl;
            book[totalNumOfBook]->showdata();

            totalNumOfBook++;
        }

        // Buy a Book
        if (choice == 2) {
            cin.ignore();
            cout << "\nEnter Title of Book: ";  cin.getline(titleBuy, 20);
            cout << "Enter Author of Book: ";   cin.getline(authorBuy, 20);
            // Search the book
            bool found = false;
            for (int i = 0; i < totalNumOfBook; ++i) {
                if (book[i]->search(titleBuy, authorBuy)) {
                    book[i]->buybook();
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "This Book is Not in Stock!" << endl;
            }
        }

        // Search for Book
        if (choice == 3) {
            cin.ignore();
            cout << "\nEnter Title of Book: ";  cin.getline(titleBuy, 20);
            cout << "Enter Author of Book: ";   cin.getline(authorBuy, 20);
            // Search the book
            bool found = false;
            for (int i = 0; i < totalNumOfBook; ++i) {
                if (book[i]->search(titleBuy, authorBuy)) {
                    cout << "Found the Book!" << endl;
                    book[i]->showdata();
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "This Book is Not in Stock!" << endl;
            }
        }

        // Edit Details of Book
        if (choice == 4) {
            cin.ignore();
            cout << "\nEnter Title of Book: ";  cin.getline(titleBuy, 20);
            cout << "Enter Author of Book: ";   cin.getline(authorBuy, 20);
            // Search the book
            bool found = false;
            for (int i = 0; i < totalNumOfBook; ++i) {
                if (book[i]->search(titleBuy, authorBuy)) {
                    cout << "Found the Book, ready to edit!" << endl;
                    book[i]->editdata();
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "This Book is Not in Stock!" << endl;
            }
        }

        // Exit
        if (choice == 5) {
            cout << "Thank you for your visiting!" << endl;
            exit(0);
        }

        cin.ignore();
        do {
            cout << "\n\nPress any key to continue..." << endl;
        } while (cin.get() != '\n');
    }
    return 0;
}