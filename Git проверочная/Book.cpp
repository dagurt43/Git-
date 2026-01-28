#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(string t, string a, int y, string g)
    : title(t), author(a), year(y), genre(g) {
}

void Book::printInfo() {
    cout << "Название: " << title << endl;
    cout << "Автор: " << author << endl;
    cout << "Год: " << year << endl;
    cout << "Жанр: " << genre << endl;
}

string Book::getTitle() {
    return title;
}

int Book::getYear() {
    return year;
}

bool Book::isRecent() {
    return year > 2010;
}
