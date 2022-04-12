#ifndef TABTENN0_H_
#define TABTENN0_H_
typedef unsigned int uint;
#include <string>
using std::string;
class TableTennisPlayer
{
private:
	string firstname;
	string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const string& fn = "none", const string& in = "none", bool ht = false);
	void Name() const;
	bool HasTable() const { return hasTable; };
	void ResetTable(bool v) { hasTable = v; };
};


class RatePlayer : public TableTennisPlayer
{
private:
	unsigned int rating;
public:
	RatePlayer(uint r = 0, const string& fn = "none",
		const string& in = "none", bool ht = false);
	RatePlayer(uint r, const TableTennisPlayer& tp);
	unsigned int Rating() const { return rating; }
	void ResetRating(unsigned int r) { rating = r; }
};

#endif