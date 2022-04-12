#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
private:
	enum { Lbs_per_stn = 14 };
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lsb);
	Stonewt();
	~Stonewt();
	void show_lbs() const;
	void show_stn() const;
	operator double() const;
	operator int() const;
	friend Stonewt& operator*(double n, const Stonewt& st);
};

#endif // !STONEWT_H_
