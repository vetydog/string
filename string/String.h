#pragma once
#include <iostream>

using namespace std;

class String
{
    char* s;
    static int count;
    int maxSize;

public:
    String();
    String(int size);
    String(const char* str);
    String(String& obj);
    ~String();

    void setString(const char* str);
    void show();
    static int countString();
};

