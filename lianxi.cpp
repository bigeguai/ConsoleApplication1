#include "lianxi.h"

Cow::Cow()
{
	strcpy_s(name, 20, "NULL");
	hobby = new char[5];
	strcpy(hobby, "NULL");
	weight = 0.0;
}

Cow::Cow(const char* nm, const char* ho, double wt)
{
	strcpy_s(name, 20, nm);
	hobby = new char[strlen(ho) + 1];
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow& c)
{
	strcpy(name, c.name);
	weight = c.weight;
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
}

Cow::~Cow()
{
	delete[]hobby;
}

Cow& Cow::operator=(const Cow& c)
{
	if (this == &c)
		return* this;
	delete[]hobby;
	strcpy(name, c.name);
	weight = c.weight;
	hobby = new char[strlen(c.hobby) + 1];
	strcpy_s(hobby, strlen(c.hobby) + 1, c.hobby);
	return *this;
}

void Cow::ShowCow() const
{
	std::cout << "The name is " << name << ".\nThe hobby is"
		<< hobby << ".\nThe weight is" << weight << std::endl;
}