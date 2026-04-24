#include "String.h";

int main() {
    String a("Hi");
    String b("Hello");
    String c(56);
    String g(a);

    b.show();
    c.setString("World");
    c.show();
    g.show();
    cout << String::countString();
}