#include "book.h"

Book::Book(){
    this->pages = 0;
    this->name = "N/A";
}

void Book::create_books(){
    cout << "What is the name of the book: ";
    cin >> this->name;
    cout << "How many pages were in this book: ";
    cin >> this->pages;
}

//getters & setters
int Book::get_pages() const{
    return this->pages;
}

string Book::get_name() const{
    return this->name;
}

void Book::set_pages(int pages){
    this->pages = pages;
}

void Book::set_name(string name){
    this->name = name;
}

//big three
Book::~Book(){
    //no dynamtic memory 
    cout << "Book destructor running" << endl;
}

Book::Book(const Book& old_book){
    cout << "Book CC Running" << endl;
    this->pages = old_book.pages;
    this->name = old_book.name;
}

Book& Book::operator= (const Book& old_book){
    cout << "Book Assignment operator running" << endl;
    if(this != &old_book){
        this->pages = old_book.pages;
        this->name = old_book.name;
    }
}