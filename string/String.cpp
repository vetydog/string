#include "String.h"
#include <cstring>

using namespace std;

int String::count = 0;

String::String() : String(80) {}

String::String(int size) {
    if (size <= 0)
        size = 80;
    maxSize = size;
    s = new char[maxSize + 1];
    count++;
}

String::String(const char* str) : String(str ? strlen(str) : 80)
{
    if (str)
        strcpy_s(s, maxSize + 1, str);
}

String::String(String& obj) {
    if (obj.s) {
        maxSize = obj.maxSize;
        s = new char[maxSize + 1];
        strcpy_s(s, maxSize + 1, obj.s);
    }
}

String::~String() {
    delete[] s;
    count--;
}

void String::setString(const char* str) {
    strcpy_s(s, maxSize+ 1, str);
}

void String::show(){
    cout << s << endl;
}
int String::countString() {
    return count;
}