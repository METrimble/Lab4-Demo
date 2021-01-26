#ifndef SHELF_H
#define SHELF_H

#include <iostream>
#include "book.h"
using namespace std;

class Shelf{
    private:
        Book *books;
        int num_books;
    public:
        Shelf();
        void create_shelf();

        //getters and setters
        int get_num_books();

        void set_num_books(int num_books);

        //big three
        ~Shelf();
        Shelf(const Shelf&);
        Shelf& operator= (const Shelf&);
};

#endif