#include "stack.h"

Stack::Stack(int n)
{
	int nn = n;
	if (n <= 0)
		nn = MAX;
	size = nn;
	top = 0;
	pitems = new Item[nn];
}

Stack::Stack(const Stack& st)
{
	size = st.size;
	top = st.top;
	pitems = new Item[size];
}

Stack::~Stack()
{
	delete[]pitems;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == size;
}

bool Stack::push(const Item& item)
{
	if (isfull())
		return false;
	pitems[top] = item;
	top++;
	return true;
}

bool Stack::pop(Item& st)
{
	if (isempty())
		return false;
	st = pitems[--top];
	return true;
}

Stack& Stack::operator=(const Stack& st)
{
	if (this == &st)
		return *this;
	delete[]pitems;
	size = st.size;
	pitems = new Item[size];
	for (int i = 0; i < st.top; i++)
	{
		int j = st.pitems[i];
		pitems[i] = j;
	}
	top = st.top;
	return *this;
}

ostream& operator<<(ostream& os, const Stack& st)
{
	for (int i = 0; i < st.top; i++)
	{
		os << st.pitems[i] << std::endl;
	}
	return os;
}