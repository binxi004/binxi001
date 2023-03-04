#include<iostream>
using namespace std;
int main()
{
	int as[5] = { 5,2,3,1,4 };
	/*int max = 0;
	for (int i = 0; i < 5; i++) {
		if(max<as[i])
		{
			int x = max;
			max = as[i];

		}
	}
	cout << max << endl;*/
	/*
	int stear = 0;
	int end = sizeof(as) / sizeof(as[0]) - 1;
	for (int x; stear < end;stear++,end--) {
		x = as[stear];
		as[stear] = as[end];
		as[end] = x;

	}
	for (int s = 0; s < sizeof(as) / sizeof(as[0]); s++) { cout << as[s] << endl; }*/

	int te;
	int end = 0;
	
	
		for (int i = 0; i < 4; i++)
		{
			for (int x = 0; x < 4 - i; x++)
			{
				if (as[x] > as[x + 1])
				{
					te = as[x];
					as[x] = as[x + 1];
					as[x + 1] = te;
					
				}
			}
		}
		
	
	for (int u = 0; u < 5; u++) { cout << as[u] << endl; }
}
