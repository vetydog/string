#pragma once
#include <iostream>

using namespace std;

class String
{
    char* s;
    static int count;

public:
    String();
    String(int size);
    String(const char* str);
    ~String();

    void setString(const char* str);
    void show();
    static int countString();
};

