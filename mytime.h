#ifndef MYTIME_H_
#define MYTIME_H_
#include <iostream>

class Time
{
private:
	int hours;
	int minutes;
public:
	Time() { hours = 0; minutes = 0; };
	Time(int h, int m = 0) { hours = h; minutes = m; };
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0) { hours = h; minutes = m; };
	Time operator+(const Time& t) const;
	Time operator-(const Time& t) const;
	Time operator*(double mult) const;
	friend Time operator*(double mult, const Time& t) { return t.operator* (mult); }
	friend std::ostream& operator<<(std::ostream& os, const Time& t);
	void show() const;
};

#endif // !MYTIME_H_
