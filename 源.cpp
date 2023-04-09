#include<iostream>
using namespace std;
int re(int a[], int num) {
	if (num == 0) {
		return a[num];
	}
	return re(a, num - 1)+a[num];


}
int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sum=re(a, 9);
	cout << sum << endl;

	return 0;
}