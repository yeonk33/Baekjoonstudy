//#include<stdio.h>
//int main() {
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	b -= 45;
//	if (b < 0)
//	{
//		a--;
//		b += 60;
//	}
//	if (a < 0)
//	{
//		a = 23;
//	}
//	printf("%d %d\n", a, b);
//}

#include<iostream>
using namespace std;
int main() {
	int H, M;
	cin >> H >> M;
	M -= 45;
	if (M < 0)
	{
		H--;
		M += 60;
	}
	if (H < 0)
	{
		H = 23;
	}
	cout << H << " " << M << endl;
}