#ifndef _BOOK_H_
#define _BOOK_H_
#include <string>
class Book{
    // Data members
    private:
    std::string title, author, publisher;
    int pages;
    //function members
    public:
    Book():title(""), author(""), publisher(""), pages(0){}
    Book(std::string title, std::string author, int pages);
    std::string info() const;
    void show() const;

    //Getters
    std::string get_title() const;
    void set_title(std::string t);
    std::string get_author() const;
    void set_author(std::string a);
    int get_pages() const;
    void set_pages(int p);
    ~Book();

};
#endif