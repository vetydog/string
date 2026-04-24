#include "String.h"
#include <cstring>

using namespace std;

int String::count = 0;

String::String() : String(80) {}

String::String(int size) {
    s = new char[size + 1];
    count++;
}

String::String(const char* str) : String(strlen(str)) {
    strcpy_s(s, strlen(str) + 1, str);
}
String::String(String& obj) {
    int len = strlen(obj.s);
    s = new char[len + 1];
    strcpy_s(s, len + 1, obj.s);
}

String::~String() {
    delete[] s;
    count--;
}

void String::setString(const char* str) {
    strcpy_s(s, strlen(str)+ 1, str);
}

void String::show(){
    cout << s << endl;
}
int String::countString() {
    return count;
}