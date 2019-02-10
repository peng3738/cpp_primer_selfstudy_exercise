#include<iostream>
//#include<>

using std::cout;
using std::endl;

class Quote
{
public:
	Quote() = default;
	Quote(const std::string &book, double sales_price) :bookNo(book), price(sales_price) {}
	std::string isbn() const { return bookNo; }
	virtual double net_price(std::size_t n) const { return n * price; }
	virtual ~Quote() = default;
private:
	std::string bookNo;
protected:
	double price = 0.0;

};

class Disc_quote :public Quote {
public:
	Disc_quote() = default;
	Disc_quote(const std::string &book,double price,std::size_t qty,double disc):\
		Quote(book, price), quantity(qty), discount(disc) {}
	std::pair<size_t, double>discount_policy()const { return { quantity,discount }; }
	double net_price(std::size_t) const = 0;
protected:
	std::size_t quantity = 0;
	double discount = 0.0;
};

class Bulk_quote :public Disc_quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string & book, double price, std::size_t qty, double disc):Disc_quote(book, price, qty, disc) {}
	double net_price(std::size_t) const override;
};

double Bulk_quote::net_price(size_t cnt) const
{
	if (cnt >= quantity)
		return cnt * (1 - discount)*price;
	else return cnt * price;
}

int main()
{
	Quote item;
	Bulk_quote bulk;
	//cout << bulk.isbn();
	system("pause");
	return 0;
}