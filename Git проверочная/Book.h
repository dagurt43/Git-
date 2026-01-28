#pragma once
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;
    string genre;

public:
    Book(string t, string a, int y, string g);
    void printInfo();
    string getTitle();
    int getYear();
    bool isRecent();
};