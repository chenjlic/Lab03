#include<iostream>
/*This is the code for Lab 3, Question 3
 * Author: Jonny Chen
 * UniqueID: chenjl
 * Last Date Motified: 09/23/2021
 * */

void minmax(int input[], int size) {
	std::string res;
	for(int i = 1; i < size-1; i++) {
		if(input[i] < input[i+1] && input[i] < input[i-1]) {
			res += std::to_string(i+1) + " ";
		} else if(input[i] > input[i+1] && input[i] > input[i-1]) {
			res+= std::to_string(i+1) + " ";
		}
	}
	if(input[size-1] < input[size]) {
		res += std::to_string(size);
	}
	res += "\n";
	std::cout<<res;
}

int main() {
	std::cout<<"How many numbers do you want in the array?\nEnter:  ";
	int size;
	int num;
	std::cin>>size;
	int nums [size];
	for(int j = 0; j < size; j++) {
		std::cout<<"Input a value: ";
		std::cin>>num;
		nums[j] = num;
	}
	minmax(nums, size);
}

