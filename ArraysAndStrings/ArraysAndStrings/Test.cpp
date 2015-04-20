#include<iostream>
using namespace std;

void func() {
	int x;
	printf("%d\n", x);
	x = x + 1;
}

int main(void){
	/*
	const float pi = 3.14;
	pi = 5.40;			//Compile time error, lvalue must be modifiable
	printf(‘%f’, &pi);
	cin.ignore();
	*/
	/*
	int a = 5;
	float b = (float)a / (float)2;
	printf("b=%f", b);		// OUTPUT: b=2.0000
	*/
	/*
	char*c = "Hello";
	char d[6];
	while (*c++ = *d++);	//Compile time error: lvalue must be modifiable
	*/
	/*
	char *a = (char*)malloc(12);
	printf("size:%d\n", sizeof(a));		//size:4
	printf("size:%d\n", sizeof(*a));	//size:1
	*/
	/*
	int i;
	double x[10];
	for (i = 0; i <= 10; i++){
		x[i] = (double)i;		//Runtime error
	}
	*/
	/*
	int arr[5] = { 11, 22, 33, 44, 55 };
	for (int i = 0; i < 5; i++){
		cout << *(arr + i) << " ";		// 11 22 33 44 55
		cout << *(arr++) << " ";		//Error: lvalue is not modifiable.
		cout << *arr+i << " ";		//11 12 13 14 15
	}
	*/
	/*
	func();	//0
	func();	//1
	func();	//2
	*/
	/*
	int *p1 = NULL;
	int a = 5;
	int *p2 = &a;
	p1 = (int *)p2;
	cout << p1 << " " << *p1; //Address of a  and 5  
	*/
	//cout << x;
	cin.ignore();
	return 0;
}