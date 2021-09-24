#include<iostream>
/*This is the code for lab 03 question 2
 * Author: Jonny Chen
 * UniqueID: chenjl
 * Last Date Motified: 9/20/2021
 * */

void ref(int& a, int& b) {
	int atmp = a;
	a = b;
	b = atmp;
}

void poin(int *a, int *b) {
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

int main() {
	int a = 10;
	int b = 2;
	std::cout<<a<<","<<b<<"\n"; //-> 10,2
	ref(a,b);
	std::cout<<a<<","<<b<<"\n"; //-> 2,10
	std::cout<<a<<","<<b<<"\n"; //-> 10,2
        poin(&a,&b);
        std::cout<<a<<","<<b<<"\n"; //-> 2,10


}

