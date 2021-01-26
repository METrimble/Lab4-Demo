#include "shelf.h"

Shelf::Shelf(){
    this->num_books = 0;
    this->books = NULL;
}

void Shelf::create_shelf(){
    cout << "How many book are on the shelf? ";
    cin >> this->num_books;

    this->books = new Book [this->num_books];
    for(int i = 0; i < this->num_books; i++){
        cout << "Book " << i << ":" << endl;
        this->books[i].create_books();
        cout << "-------------------------" << endl;
    }
}

//getters and setters
int Shelf::get_num_books(){
    return this->num_books;
}

void Shelf::set_num_books(int num_books){
    this->num_books = num_books;
}

//big three
Shelf::~Shelf(){
    cout << "Shelf destructor running" << endl;
    delete [] books;
    books = NULL;
}

Shelf::Shelf(const Shelf& old_shelf){
    cout << "Shelf CC running" << endl;
    this->num_books = old_shelf.num_books;
    this->books = new Book [this->num_books];
    for(int i = 0; i < this->num_books; i++){
        this->books[i] = old_shelf.books[i];
    }
}

Shelf& Shelf::operator= (const Shelf& old_shelf){
    cout << "Shelf assignment operator running" << endl;
    if(this != &old_shelf){
        this->num_books = old_shelf.num_books;

        if(this->books != NULL){
            delete [] this->books;
        }

        this->books = new Book [this->num_books];
        for(int i = 0; i < this->num_books; i++){
            this->books[i] = old_shelf.books[i];
        }
    }
    return *this;
}
