#include<iostream>
using namespace std;
struct fushu
{
	double real;
	double image;

};
fushu add(fushu x, fushu y)
{
	fushu x3;
	x3.real = x.real + y.real;
	x3.image = x.image + y.image;
	return x3;
}

int main()
{
	fushu s, n, l;
	cout << "�����һ��������ʵ�����鲿" << endl;
	cin >> s.real>> s.image;
	cout << "����ڶ����ĸ���ʵ�����鲿" << endl;
	cin >> n.real>> n.image;
	l=add(s, n);
	/*cout << l.real << l.image << 'i';*/
	cout << "���������ĺ�Ϊ"<<endl;
	if (l.image > 0) {
		if (l.real ==0) { cout << l.image << 'i'; }
		else { cout << l.real << '+' << l.image << 'i'; }
	}
	else if(l.image<0){
		if (l.real == 0) { cout << l.image << 'i'; }
		else { cout << l.real  << l.image << 'i'; }
	}
	else if (l.image == 0) { cout << l.real << endl; }
}