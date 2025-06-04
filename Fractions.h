#pragma once
#include <iostream>
using namespace std;


namespace mathlib {
	template <typename T>
	class Fraction {

		T numerator;
		T denominator;

		Fractions() {
			numerator = 0;
			denominator = 0;
		}

	public:
		//constructor
		Fraction(T num, T denom) : numerator(num), denominator(denom) {
			if (denominator == 0) {
				throw invalid_argument("Denominator cannot be zero.");
			}
		}

		//methods

		void simplify() {
			T divisor = gcd(numerator, denominator);
			if (divisor != 0) {
				numerator /= divisor;
				denominator /= divisor;
			}
		}

		void toDouble() {
			return static_cast<double>(numerator) / static_cast<double>(denominator);

		}



		//overloaded operators


	public:
		Fraction(T num = 0, T denom = 1) : numerator(num), denominator(denom) {
			if (denominator == 0) {
				throw std::invalid_argument("Denominator cannot be zero.");
			}
		}

		double toDouble() const {
			return static_cast<double>(numerator) / denominator;
		}

		void Simplify() {
			T gcd = std::gcd(numerator, denominator);
			numerator /= gcd;
			denominator /= gcd;
		}

		
		Fraction operator+(const Fraction& lhs, const Fraction& rhs) {
			T num = lhs.numerator * rhs.denominator + rhs.numerator * lhs.denominator;
			T denom = lhs.denominator * rhs.denominator;
			return Fraction(num, denom);
		}

		Fraction operator*(const Fraction& lhs, const Fraction& rhs) {
			T num = lhs.numerator * rhs.numerator;
			T denom = lhs.denominator * rhs.denominator;
			return Fraction(num, denom);
		}


		Fraction operator-(const Fraction& other) const {
			T num = numerator * other.denominator - other.numerator * denominator;
			T denom = denominator * other.denominator;
			return Fraction(num, denom);
		}
		Fraction operator*(const Fraction& other) const {
			return Fraction(numerator * other.numerator, denominator * other.denominator);
		}
		Fraction operator/(const Fraction& other) const {
			if (other.numerator == 0) {
				throw invalid_argument("Cannot divide by zero.");
			}
			return Fraction(numerator * other.denominator, denominator * other.numerator);
		}


		bool operator==(const Fraction& other) const {

			return numerator * other.denominator == denominator * other.numerator;
		}

		bool operator!=(const Fraction& other) const {
			return numerator * other.denominator != denominator * other.numerator;
		}

		bool operator<(const Fraction& other) const {
			return numerator * other.denominator < denominator * other.numerator;
		}

		bool operator>(const Fraction& other) const {
			return numerator * other.denominator > denominator * other.numerator;
		}

		bool operator<=(const Fraction& other) const {
			return numerator * other.denominator <= denominator * other.numerator;
		}

		bool operator>=(const Fraction& other) const {
			return numerator * other.denominator >= denominator * other.numerator;
		}



	private:
		// Helper function to compute GCD - From Copilot 
		T gcd(T a, T b) const {
			while (b != 0) {
				T temp = b;
				b = a % b;
				a = temp;
			}
			return a;
		}

	

	friend ostream& operator<<(ostream& os, const Fraction& other) {
		os << other.numerator << "/" << other.denominator;
		return os;
	}

	friend istream& operator>>(istream& is, Fraction& other) {

		char slash;
		T num, denom;

		is >> num >> slash >> denom;

		if (slash != '/' || denom == 0) {
			{
				is.setstate(ios::failbit); //Copilot line of code - marks the stream as having encountered a logical error
			}
		}
		other.numerator = num;
		other.denominator = denom;
		return is;

	}

};
