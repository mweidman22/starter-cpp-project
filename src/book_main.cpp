#include "book.h"
#include <iostream>
using namespace std;
int main(){
    //a stack object
    string t, a;
    int p;
    cout << "Enter book info" << endl;
    cout << "Title: ";
    getline(cin, t);
    cout << "Author: ";
    getline(cin, a);
    cout << "# of Pages: ";
    cin >> p;
    Book b1;
    b1.show();
    //a Heap object
    Book* b2 = new Book(t, a, p);
    b2->show();
    return 0;

}