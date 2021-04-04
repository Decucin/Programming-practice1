#include "cpxNum.h"

int main() {
	double real, imag;
	cout << "请输入第一个复数的实部和虚部: ";
	cin >> real >> imag;
	cpxNum c1(real, imag); //初始化‘复数’c1
	cout << "您生成的第一个复数是: ";
	c1.print();
	cout << endl << "请输入第二个复数的实部和虚部: ";
	cin >> real >> imag;
	cpxNum c2(real, imag); //初始化‘复数’c2
	cout << "您生成的第二个复数是: ";
	c2.print();
	cout << endl;
	cout << "***********复数运算测试*************" << endl;
	cout << "c1 + c2的结果是: "; (c1 + c2).print(); cout << endl;
	cout << "c1 - c2的结果是: "; (c1 - c2).print(); cout << endl;
	cout << "c1 * c2的结果是: "; (c1 * c2).print(); cout << endl;
	cout << "c1 / c2的结果是: "; (c1 / c2).print(); cout << endl;
	cout << "***********复数运算测试结束*************" << endl;
	return 0;
}