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

    friend String operator*(const String& s1, const String& s2) {
        char result[256] = "";  
        int y = 0;

        for (int i = 0; s1.s[i] != '\0'; i++) {

            bool found = false;
            for (int j = 0; s2.s[j] != '\0'; j++) {
                if (s1.s[i] == s2.s[j]) {
                    found = true;
                    break;
                }
            }

            bool already = false;
            for (int x = 0; x < y; x++) {
                if (result[x] == s1.s[i]) {
                    already = true;
                    break;
                }
            }

            if (found && !already) {
                result[y++] = s1.s[i];
            }
        }

        result[y] = '\0';

        return String(result);
    }
};

