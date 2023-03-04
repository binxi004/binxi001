#include<iostream>
#include<vector>
using namespace std;

//void paixu(int* arr, int n)
//{
//	int end = n;
//	while (end)
//	{
//		int flag = 0;
//		for (int i = 1; i < end; ++i)
//		{
//			if (arr[i - 1] > arr[i])
//			{
//				int tem = arr[i];
//				arr[i] = arr[i - 1];
//				arr[i - 1] = tem;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//		--end;
//	}
//}

int main()
{
	/*int i = 0;
	int a;
	int n;
	 vector<int>arr;
	cout << "请输入学生成绩" << endl;
	while (cin >> a)
	{
		arr.push_back(a);
		i++;
		if (cin.get() == '\n')break;
	}
	int* arr1 = &arr[0];
	paixu(arr1, i);

	for (int i = 0;; i++)
	{
		cout << arr[i] << " ";
	}*/

	vector <int> arr;
	int a;
	int i = 0;
	while (cin >> a)
	{
		arr.push_back(a);
		i++;
		if (cin.get() == '\n')break;
	}
	for (int j = 0; j < i; j++) {
		cout<<arr[j];
	}
}
