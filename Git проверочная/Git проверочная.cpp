#include "Book.h"
#include <iostream>
using namespace std;

int main() {
    Book book("Война и мир", "Лев Толстой", 1869, "Роман");

    book.printInfo();

    if (book.isRecent()) {
        cout << "Это недавняя книга" << endl;
    }
    else {
        cout << "Это старая книга" << endl;
    }

    return 0;
}