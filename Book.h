//
// Created by Haoxiang Zhang on 8/11/22.
//
/**
 * @mainpage Book Library Documentation
 * @section intro_sec Introduction
 * This is the Book C++ library for Book Shop system.
 *
 * @section install_sec Installation
 * @subsection install_dependencies Installing Dependencies
 * No dependency needed.
 * @subsection install_library Installing Library
 * No library needed.
 * @subsection install_example Installing Examples
 * There is no example.
 */

#include <iostream>
#include <string>

#ifndef BOOK_SHOP_BOOK_H
#define BOOK_SHOP_BOOK_H

/**
 * @brief Book class used for some operations in a book shop
 */
class Book {
private:
    /**
     * Book's information include:
     *      Author name
     *      Title name
     *      Publisher name
     *
     *      Book's price
     *      Stock of the book
     */
    char* m_author;
    char* m_title;
    char* m_publisher;

    float* m_price;
    int* m_stock;

public:
    /**
     * Create a new Book object and initialize the basic information
     * @brief Constructor.
     */
    Book() {
        m_author = new char[20];
        m_title = new char[20];
        m_publisher = new char[20];

        m_price = new float();
        m_stock = new int();
    }

    /**
     * @brief Enter the book info from user
     */
    void feeddata();

    /**
     * @brief Enter the book info and update
     */
    void editdata();

    /**
     * @brief Print out the book information
     */
    void showdata();

    /**
     * @brief Compare the given book name and author name to the information in the stock
     * @param titleName is the title name from the customer
     * @param authorName is the author name from the customer
     * @return true if found the book with given title name and author name, false otherwise
     */
    bool search(char titleName[], char authorName[]);

    /**
     * @brief Sell the amount of book and take out the amount from the stock
     */
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
