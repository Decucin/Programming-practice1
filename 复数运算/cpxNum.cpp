#include "cpxNum.h"

cpxNum::cpxNum(double ral, double imag){
c_ral = ral;
c_imag = imag;
}

cpxNum cpxNum::operator+(const cpxNum& c2) {
	cpxNum result;
	result.c_ral = this->c_ral + c2.c_ral;
	result.c_imag = this->c_imag + c2.c_imag;
	return result;
}

cpxNum cpxNum::operator-(const cpxNum& c2) {
	cpxNum result;
	result.c_ral = this->c_ral - c2.c_ral;
	result.c_imag = this->c_imag - c2.c_imag;
	return result;
}

cpxNum cpxNum::operator*(const cpxNum& c2) {
	cpxNum result;
	result.c_ral = this->c_ral * c2.c_ral - this->c_imag * c2.c_imag;
	result.c_imag = this->c_ral * c2.c_imag + this->c_imag * c2.c_ral;
	return result;
}

cpxNum cpxNum::operator/(const cpxNum& c2) {
	cpxNum result;
	result.c_ral = 0;
	result.c_imag = (this->c_ral * c2.c_ral + this->c_imag * c2.c_imag) * (this->c_imag * c2.c_ral - this->c_ral * c2.c_ral) / (c2.c_ral * c2.c_ral + c2.c_imag * c2.c_imag);
	return result;
}

void cpxNum::print() {
	if (c_ral == 0.0 && c_imag == 0)
		cout << '0';
	else if (c_imag == 0)
		cout << c_ral;
	else if (c_ral == 0)
		cout << c_imag << 'i';
	else if (c_imag < 0)
		cout << c_ral << c_imag << 'i';
	else
		cout << c_ral << '+' << c_imag << 'i';
}