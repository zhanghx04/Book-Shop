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

    int newBookID = 0, r, t;
    int choice;

    char titleBuy[20], authorBut[20];

    while (true) {
        printMenu();
        cin >> choice;

        if (choice <= 0 || choice > 5) {
            cout << "Invalid Choice, please enter number 1 - 5." << endl;
            continue;
        }

        // Entry of New Book
        if (choice == 1) {
            book[newBookID] = new Book();
            book[newBookID]->feeddata();

            cout << "The new book information: " << endl;
            book[newBookID]->showdata();

            newBookID++;
        }

        // Buy a Book

        // Search for Book

        // Edit Details of Book

        // Exit
        if (choice == 5) {
            cout << "Thank you for your visiting!" << endl;
            exit(0);
        }
    }
}