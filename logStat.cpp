#include <iostream>
//#include <string>
#include <vector>

// Container with checked statements
std::vector<bool> statement;

bool statement_0(){
	return false;
};
// This is a numbered list of twelve statements.
bool statement_1(){
	return true;
};

bool statement_2(){

};

bool statement_3(){

};

bool statement_4(){

};

bool statement_5(){

};

bool statement_6(){

};

bool statement_7(){

};

bool statement_8(){

};

bool statement_9(){

};

bool statement_10(){

};

bool statement_11(){

};

bool statement_12(){

};

int main(){

	bool* (*method)() = new bool[13];

	method[0] = &statement_0;
	method[1] = &statement_1;
	method[2] = &statement_2;
	method[3] = &statement_3;
	method[4] = &statement_4;
	method[5] = &statement_5;
	method[6] = &statement_6;
	method[7] = &statement_7;
	method[8] = &statement_8;
	method[9] = &statement_9;
	method[10] = &statement_10;
	method[11] = &statement_11;
	method[12] = &statement_12;

	std::vector<bool>::iterator stiter;
	int iterator = 0;

	for (stiter = statement.begin(); stiter != statement.exnd(); stiter++;)
		*stiter = method[iterator++];


	return 0;
}