#include <iostream>
#ifndef STRGBAD_H_
#define STRGBAD_H_
using std::ostream;
using std::istream;

class String
{
private:
    char* str;                    // pointer to string
    int len;                       // length of string
    static int num_strings;        // number of objects
    static const int CINLIM = 80; // cin input limit
public:
    // constructors and other methods
    String(const char* s);       // constructor
    String();                     // default constructor
    String(const String&);       // copy constructor
    ~String();                    // destructor
    int length() const { return len; }
    // overloaded operator methods
    String& operator=(const String&);
    String& operator=(const char*);
    char& operator[](int i);
    const char& operator[](int i) const;
    // overloaded operator friends
    friend bool operator<(const String& st, const String& st2);
    friend bool operator>(const String& st1, const String& st2);
    friend bool operator==(const String& st, const String& st2);
    friend ostream& operator<<(ostream& os, const String& st);
    friend istream& operator>>(istream& is, String& st);
    String operator+(const String& st) const;
    friend String operator+(const char* y, const String x);
    String operator+(const char* y);
    void stringlow();
    void stringup();
    int has(char x) const;
    // static function
    static int HowMany();
};

#endif // !STRGBAD_H_
