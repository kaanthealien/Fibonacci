#include<iostream>
using namespace std;

//Fibonacci  1 1 2 3 5 8 13 21 34 55......

int fibo(int k) {
	if ((k == 0) || (k == 1)) return k;
	return fibo(k - 1) + fibo(k - 2);
}

int main() {

	int sayi;
	cout << "Sayi giriniz: ";
	cin >> sayi;

	for (int i = 0; i <= sayi; i++)
	{
		cout << fibo(i)<<" ";
	}
	//cout << fibo(10);

	return 0;
}

/*

fibo(4): return fibo(3) + fibo(2)= 2 + 1 = 3
fibo(3): return fibo(2) + fibo(1)= 1 +1 = 2
fibo(2): return fibo(1) + fibo(0) 1 + 0 = 1
fibo(1): return 1
fibo(0): return 0

fibo(4): 1+0+1+1+0=3

*/