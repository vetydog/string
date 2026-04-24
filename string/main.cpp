#include "String.h";

int main() {
    String a("Hi");
    String b("Hello");
    String c(56);

    b.show();
    c.setString("World");
    c.show();
    cout << String::countString();
}