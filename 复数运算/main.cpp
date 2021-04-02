#include "cpxNum.h"

int main() {
	double c1_ral, c1_imag, c2_ral, c2_imag;
	cpxNum res;
	char op;
	cout << "请分别输入两个数的实部和虚部：" << endl;
	cin >> c1_ral >> c1_imag >> c2_ral >> c2_imag;
	cpxNum c1(c1_ral, c1_imag);
	cpxNum c2(c2_ral, c2_imag);
	do{
		cout << "请选择要对两个数进行的操作：（+ - * /）" << endl;
		cin >> op;
		if (op == '+')
			res = c1 + c2;
		else if (op == '-')
			res = c1 - c2;
		else if (op == '*')
			res = c1 * c2;
		else if (op == '/')
			res = c1 / c2;
		else
			cout << "输入错误，请重新输入！" << endl;
	} while (op != '+' && op != '-' && op != '*' && op != '/');
	c1.print();
	cout << " "<<op<<" ";
	c2.print();
	cout << " = ";
	res.print();
	return 0;
}