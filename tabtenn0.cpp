#include <iostream>
#include "tabtenn0.h"

TableTennisPlayer::TableTennisPlayer(const string& fn,
    const string& ln, bool ht) : firstname(fn),
    lastname(ln), hasTable(ht) {}

void TableTennisPlayer::Name() const
{
    std::cout << lastname << "," << firstname;
}

RatePlayer::RatePlayer(const string& fn, const string& in, bool ht, uint r) : TableTennisPlayer(fn, in, ht)
{
    rating = r;
}

RatePlayer::RatePlayer(uint r, const TableTennisPlayer& tp) : TableTennisPlayer(tp)
{
    rating = r;
}