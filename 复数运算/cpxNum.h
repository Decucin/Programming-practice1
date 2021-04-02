#pragma once
#include <iostream>

using namespace std;

class cpxNum {
public:
	cpxNum(double ral = 0.0, double imag = 0.0);
	cpxNum operator+(const cpxNum& c2);
	cpxNum operator-(const cpxNum& c2);
	cpxNum operator*(const cpxNum& c2);
	cpxNum operator/(const cpxNum& c2);
	void print();
private:
	double c_ral;
	double c_imag;
};