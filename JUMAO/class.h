//
// Created by 周亦 on 2020/9/29.
//

#ifndef UNTITLED_CLASS_H
#define UNTITLED_CLASS_H
#include <bits/stdc++.h>
using namespace std;
class Book{
private:
    string book_name,id,author;
    short total_num,curr_num,price;
    //char types[];
public:
    Book(const string &bookName, const string &id, const string &author, short totalNum, short currNum, short price);

    void print_content();

    void add_total(short n);
    void return_book(short n = 1);
    void borrow(short n = 1);

    const string &getBookName() const;

    void setBookName(const string &bookName) ;

    const string &getId() const;

    void setId(const string &id) ;

    const string &getAuthor() const;

    void setAuthor(const string &author) ;

    short getTotalNum() const;

    void setTotalNum(short totalNum) ;

    short getCurrNum() const;

    void setCurrNum(short currNum) ;

    short getPrice() const ;

    void setPrice(short price) ;

};

class Person{
protected:
    string name;
public:
    void setName(const string &name) ;

    const string &getName() const ;

    //查找书籍  书名/作者/(类别)
    void queryBook();
    virtual void printMenu() = 0;
};

class Visitor: public Person{
public:
    void printMenu() override;
};

class Student : public Person{
protected:
    //学号
    string id;
    //最多可借本数
    const short maxBooks = 5;
    //已借本数
    short borrowed_books;
    //已借书id
    vector<int> books;

public:
    Student();
    Student(const string &id, short borrowedBooks);

    const string &getId() const ;
    void printMenu() override;

    //借书
    void borrow_book(Book book);
    //还书
    void return_book();
};

class Teacher : public Student{
protected:
    short maxBooks = 10;
public:
    Teacher();
    Teacher(const string &id, short borrowedBooks);
    void printMenu() override;
};

class Admin : public Student{
protected:
    const short max_books = 20;

public:
    Admin();
    Admin(const string &id, short borrowedBooks);

    void printMenu() override;
    //增加书籍
    void add_book();
    //删除书籍
    void del_book();
    //修改书籍信息
    void fix_book();

    //增加用户
    void add_user();
    //删除用户
    void del_user();
    //查看借阅历史
    void query_history();

    short getMaxBooks() const ;

};
#endif //UNTITLED_CLASS_H
