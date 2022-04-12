#ifndef STOCK10_H_
#define STOCK10_H_

class Time
{
private:
	int hours;
	int minutes;
public:
	Time() { hours = 0; minutes = 0; };
	Time(int h, int m = 0) {hours = h; minutes = m; };
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0) { hours = h; minutes = m; };
	Time operator+(const Time& t) const;
	void show() const;
};

#endif // !STOCK10_H_
