// RationalNumberWithOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Rational
{
private:
	int p;
	int q;
public:
	Rational(int p = 1, int q = 1)
	{
		this->p = p;
		this->q = q;
	}
	Rational(Rational& r)
	{
		this->p = r.p;
		this->q = r.q;
	}
	void setP(int x) { p = x; }
	void setQ(int x) { q = x; }
	int getP() { return p; }
	int getQ() { return q; }
	friend Rational operator+(Rational r1, Rational r2);
	friend std::ostream& operator<<(std::ostream& out, Rational r);
};

Rational operator+(Rational r1, Rational r2)
{
	Rational t;
	t.p = r1.p * r2.q + r2.p * r1.q;
	t.q = r1.q * r2.q;
	return t;
}

std::ostream& operator<<(std::ostream& out, Rational r)
{
	out << r.p<<"/"<<r.q;
	return out;
}

int main()
{
	Rational ra(2, 3);
	Rational rb(4, 3);
	Rational rc;

	rc = ra + rb;
	std::cout << rc;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
