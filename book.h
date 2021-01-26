#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

using namespace std;

class Book{
    private:
        int pages;
        string name;
    public:
        Book();
        void create_books();

        //getters & setters
        int get_pages() const;
        string get_name() const;

        void set_pages(int pages);
        void set_name(string name);

        //big three
        ~Book(); //destructor
        Book(const Book&); //copy constructor
        Book& operator= (const Book&); //assignment operator
};

#endif