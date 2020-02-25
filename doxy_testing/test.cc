///
//@file test.cc
//@brief A file to test comment structuring of doxygen
//@author Jacob Beauchamp
///

#include<iostream>
#include<fstream>

using namespace std; 
//-------------------------------------------------------------------------------------------------
//fore declarations

///
//@brief Takes in lookup table from compainion file if it exists.
//@param The function takes no parameters
//@return The function returns no values
///
void takeInTable();

///
//@brief At end of session, exports the filled lookup table to companion file, creates one if it does not exist.
//@param The function takes no parameters
//@return Function is void
///
void exportTable();

///
//@brief Calculates the factorial of the given input number iteratively
//@param The function takes in an intger target to have its factorial calculated
//@return Returns the integer value of the factorial of the target value
///
int factCalculator(int factTarget);

//end forward definitions
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//begin program
int main(){
	int lookupTable[100]
	int tableSize = 0;
	int nFact;
	cout << "Factorial calculator\n Enter a number n: ";
	cin >> nFact;
	cout << "The result is: " << factCalculator(nFact) << endl;
	return 0;
}
//end program
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//function definitions
void takeInTable(){
	istream takeIn;
	takeIn.open("table.dat")
	//if does not exist, initialise the lookup table
	if(takeIn.fail()){
		tableSize = 2;
		lookupTable[0] = 1;
		lookupTable[1] = 1;
	}
	else{
		int input, pos = 0;
		takeIn >> input;
		while(takeIn.eof() == 0){
			lookupTable[pos] = input;
			pos ++;
			takeIn >> input;
		}
	}
	takeIn.close();
}
void exportTable(){
	for(int i = 0; i < tableSize; i ++){
			
	}
}

int factCalculator(int factTarget){

}
//-------------------------------------------------------------------------------------------------
