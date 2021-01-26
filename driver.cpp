#include <iostream>
#include "shelf.h"
#include "book.h"

using namespace std;

int main(){
    Shelf s;
    s.create_shelf();

    //create a second shelf using copy constructor
    Shelf s2 = s;
    //create a second shelf using assignment

    Shelf s3;
    s3.create_shelf();

    s = s3;

    return 0;
}