#ifndef EXERCISE_14_2_H
#define EXERCISE_14_2_H
#include<iostream>
#include<string>

class Sales_data
{
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
	friend std::istream &read(std::istream &is, Sales_data &item);
	friend std::ostream &print(std::ostream &os, const Sales_data &item);
	friend std::istream &operator>>(std::istream &is, Sales_data &item);
	friend std::ostream &operator<<(std::ostream &os, const Sales_data &item);
	friend Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);
	

public:
	Sales_data() = default;
	Sales_data(const std::string&s) :bookNo(s) {};
	Sales_data(const std::string &s, unsigned n, double r) :bookNo(s), units_sold(n), revenue(r) {};
	Sales_data(std::istream &);
	std::string isbn() const { return bookNo; };
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	Sales_data &operator+=(const Sales_data &);
private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
std::istream &operator>>(std::istream &is, Sales_data &item)
{

	is >> item.bookNo >> item.units_sold >> item.revenue;
	return is;
}

std::ostream &operator<<(std::ostream &os, const Sales_data &item)
{
	os << item.bookNo << " " << item.units_sold << " " << item.revenue << " ";
	return os;
}

Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data Sum;
	Sum.bookNo = lhs.bookNo;
	Sum.units_sold = lhs.units_sold + rhs.units_sold;
	Sum.revenue=lhs.revenue + rhs.revenue;
	return Sum;
}

Sales_data &Sales_data::operator+=(const Sales_data &item)
{
	if (bookNo == item.bookNo)
	{
		units_sold += item.units_sold;
		revenue += item.revenue;
	}
	return *this;
}



double Sales_data::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else return 0;
}

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

std::istream &read(std::istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> item.revenue;
	return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue << " " << item.avg_price();
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

Sales_data::Sales_data(std::istream &is)
{
	read(is, *this);
}

#endif
