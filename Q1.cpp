#include<iostream>
#include<string>
/*This is the code for Lab 3 Question 1
 * Author: Jonny Chen
 * UniqueID: chenjl
 * Last Date Modified: 09/17/2021
 * */

int let(std::string s) {
        int res = 0;
        for(int i = 0; i< s.length(); i++) {
                if(int(s.at(i)) > 64 && int(s.at(i) < 91)) {
                        res++;
                } else if (int(s.at(i)) > 96 && int(s.at(i) < 123)) {
                        res++;
                }
        }
        return res;
}

int dig(std::string s) {
        int res = 0;
        for(int i = 0; i < s.length(); i++) {
                if(int(s.at(i)) > 47 && int(s.at(i) < 58)) {
                        res++;
                }
        }
        return res;
}

int num(std::string s) {
        int res = 0;
	int ini = 0;
	int end = 1;
        for(int i = 0; i < s.length(); i++) {
                if(int(s.at(i)) > 47 && int(s.at(i)) < 58) {
                        ini = 1;
                } else if(int(s.at(i)) < 47 && int(s.at(i)) > 58) {
			end = 1;
		}
		if(ini == 1 && end == 1) {
			ini = 0;
			end = 0;
			res++;
		}
        }
	if(ini == 1) {
		res++;
	}
        return res;
}

bool miami(std::string s) {
        std::string check = "miami";
        for(int i = 0; i < s.length(); i++) {
                int n = 0;
                for(int j = 0; j < check.length(); j++) {
                        if(s.at(i+n)==check.at(j)) {
                                n++;
                        }
                        if(n==5) {
                                return true;
                        }
                }
        }
        return false;
}

void lowup(std::string s, int i) {
	std::string res;
	if(i == 1) {
		std::cout<<"After making all the letters lowercase, ";
		for(int j = 0; j < s.length(); j++) {
			if (int(s.substr(i)) > 96 && int(s.substr(i) < 123)) {
				int add = int(s.at(j)) - 32;
				char ch = char(add);
				res+= ch;
                	} else {
				res+= s.at(j);
		
			}
		}
		
	} else {
		std::cout<<"After making all the letters uppercase, "; 
		for(int k = 0; k < s.length(); k++) {
			if(int(s.at(k)) > 64 && int(s.at(k) < 91)) {
                       		int add = int(s.at(k)) + 32;
				char ch = char(add);
				res+= ch;
			} else {
				res+= s.at(k);
			}
		}
	}
	std::cout<<"the new string is : "<< res << "\n";
}

int letdignum(std::string s, int i) {
	int res = 0;
	if(i == 0) {
		for(int j = 0; j < s.length(); j++) {
			if(int(s.at(j)) > 64 && int(s.at(j) < 91)) {
				res++;
			} else if(int(s.at(j)) > 96 && int(s.at(j) < 123)) {
				res++;
			}
		}
		return res;
	} else if(i == 1) {
		for(int k = 0; k < s.length(); k++) {
			if(int(s.at(k)) > 47 && int(s.at(k) < 58)) {
				res++;
			}
		}
		return res;
	} else {
		int ini = 0;
		int end = 1;
		for(int l = 0; l < s.length(); l++) {
			if(int(s.at(l)) > 47 && int(s.at(l)) < 58) {
				ini = 1;
			} else if(int(s.at(l)) < 47 && int(s.at(l)) > 58) {
				end = 1;
			}
			if(ini == 1 && end == 1) {
			ini = 0;
			end = 0;
			res++;
			}
		}
		if(ini == 1) {
			res++;
		}
		return res;
	}
	return res;	
}

int main() {
	std::cout<<"Please input a string: ";
	std::string input;
	std::cin>> input;
	lowup(input, 1);
	lowup(input, 0);
}
