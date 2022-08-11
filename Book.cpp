//
// Created by Haoxiang Zhang on 8/11/22.
//
#include <iostream>

#include "Book.h"

using namespace std;

void Book::feeddata() {
    cin.ignore();
    Book::editdata();
}

void Book::editdata() {
    cout << "\nEnter Author Name: ";        cin.getline(m_author, 20);
    cout << "Enter Title Name: ";           cin.getline(m_title, 20);
    cout << "Enter Publisher Name:";        cin.getline(m_publisher, 20);
    cout << "Enter Price: ";                cin >> *m_price;
    cout << "Enter Stock Position: ";       cin >> *m_stock;
    cout << endl;
}

void Book::showdata() {
    cout << "Author Name: " << m_author << endl;
    cout << "Title Name: " << m_title << endl;
    cout << "Publisher Name: " << m_publisher << endl;
    cout << "Price: $" << *m_price << endl;
    cout << "Stock Position: " << *m_stock << endl;
}

int Book::search(char titleBuy[20], char authorBuy[20]) {
    return strcmp(titleBuy, m_title) == 0 &&
            strcmp(authorBuy, m_author) == 0;
}

void Book::buybook() {
    int count;
    cout << "Enter the Number of Books to buy: ";
    cin >> count;

    if (count <= *m_stock) {
        *m_stock -= count;
        cout << "Successfully Bought " << count << " Books!" << endl;
        cout << "Total Price: $" << count * *m_price;
    } else
        cout << "There is not enough books in stock!";
}