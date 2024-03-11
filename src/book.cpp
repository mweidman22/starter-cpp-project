#include "book.h"
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

Book::Book(std::string title, std::string author, int pages){
    this->title = title;
    this->author = author;
    this->publisher = "";
    this->pages = pages;
}
std::string Book::info() const{
    std::stringstream sout;
    sout << std::setw(12) << "Title: " << title << std::endl;
    sout << std::setw(12) << "Author: " << author << std::endl;
    sout << std::setw(12) << "Publisher: " << publisher << std::endl;
    sout << std::setw(12) << "# of Pages: " << pages << std::endl;
    return sout.str();
}
void Book::show() const{
    std::cout << info();
}
std::string Book::get_title() const{
    return title;
}
void Book::set_title(std::string t){
        title = t;
    }
std::string Book::get_author() const{
    return author;
}
void Book::set_author(std::string a){
    author = a;
}
int Book::get_pages() const{
    return pages;
}
void Book::set_pages(int p){
pages = p;
}
Book::~Book(){}
    