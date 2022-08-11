//
// Created by Haoxiang Zhang on 8/11/22.
//
#include <iostream>
#include <string>

#ifndef BOOK_SHOP_BOOK_H
#define BOOK_SHOP_BOOK_H


class Book {
private:
    char* m_author;
    char* m_title;
    char* m_publisher;

    float* m_price;
    int* m_stock;

public:
    Book() {
        m_author = new char[20];
        m_title = new char[20];
        m_publisher = new char[20];

        m_price = new float();
        m_stock = new int();
    }

    void feeddata();
    void editdata();
    void showdata();
    int search(char[], char[]);
    void buybook();

    ~Book() {
        delete m_author;
        delete m_title;
        delete m_publisher;
        delete m_price;
        delete m_stock;
    }
};


#endif //BOOK_SHOP_BOOK_H
