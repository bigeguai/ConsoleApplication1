// stock20.h -- augmented version
#include <iostream>
#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>
using std::ostream;

class Stock
{
private:
    char * company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock();   // default constructor
    Stock(const char* co, long n = 0, double pr = 0.0);
    ~Stock(); // do-nothing destructor
    Stock(const Stock& c);
    Stock& operator=(const Stock& c);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    friend ostream& operator<<(ostream& os, const Stock& st);
    const Stock& topval(const Stock& s) const;
};

#endif