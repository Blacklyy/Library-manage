#include <bits/stdc++.h>
#include "class.h"
using namespace std;

Book::Book(const string &bookName, const string &id, const string &author, short totalNum, short currNum, short price)
        : book_name(bookName), id(id), author(author), total_num(totalNum), curr_num(currNum), price(price) {}
void Book::print_content(){
    //TODO
}
void Book::add_total(short n){
    total_num += n;
}
void Book::return_book(short n){
    curr_num += n;
}
void Book::borrow(short n){
    curr_num -= n;
}
const string & Book::getBookName() const {
    return book_name;
}
void Book::setBookName(const string &bookName) {
    book_name = bookName;
}
const string & Book::getId() const {
    return id;
}
void Book::setId(const string &id) {
    Book::id = id;
}
const string & Book::getAuthor() const{
    return author;
}
void Book::setAuthor(const string &author) {
    Book::author = author;
}
short Book::getTotalNum() const {
    return total_num;
}
void Book::setTotalNum(short totalNum) {
    total_num = totalNum;
}
short Book::getCurrNum() const {
    return curr_num;
}
void Book::setCurrNum(short currNum) {
    curr_num = currNum;
}
short Book::getPrice() const {
    return price;
}
void Book::setPrice(short price) {
    Book::price = price;
}
void Person::setName(const string &name) {
    Person::name = name;
}
const string & Person::getName() const {
    return name;
}
//查找书籍  书名/作者/(类别)
void Person::queryBook(){
    //TODO
}

void Visitor::printMenu(){
printf("visitor print.\n");
}
Student::Student(){id = "";borrowed_books = 0;};

Student::Student(const string &id, short borrowedBooks) : id(id), borrowed_books(borrowedBooks) {};

const string & Student::getId() const {
    return id;
}

void Student::printMenu(){
//todo
printf("Student print.\n");
}
//借书
void Student::borrow_book(Book book){
    book.return_book();
    //TODO
}
//还书
void Student::return_book(){
    //TODO
}

Teacher::Teacher():Student(){};
Teacher::Teacher(const string &id, short borrowedBooks):Student(id, borrowedBooks){};
void Teacher::printMenu(){
//todo
printf("teacher print.\n");
}

Admin::Admin():Student(){};
Admin::Admin(const string &id, short borrowedBooks):Student(id, borrowedBooks){};

short Admin::getMaxBooks() const {
    return max_books;
}
void Admin::printMenu(){
//todo
printf("admin print.\n");
}
//增加书籍
void Admin::add_book(){
    //TODO
}
//删除书籍
void Admin::del_book(){
    //TODO
}
//修改书籍信息
void Admin::fix_book(){
    //TODO
}
//增加用户
void Admin::add_user(){
    //TODO
}
//删除用户
void Admin::del_user(){
    //TODO
}
//查看借阅历史
void Admin::query_history(){
    //TODO
}
