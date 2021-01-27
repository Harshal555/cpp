#include <iostream> 
using namespace std; 

class Rectangle { 
private: 
	int length; 
	int breadth; 
}; 

void fun() 
{ 
	// By taking a pointer p and 
	// dynamically creating object 
	// of class rectangle 
	Rectangle* p = new Rectangle(); 
	//delete p;//deallocate memory
} 

int main() 
{ 
	// Infinite Loop 
	while (1) { 
		fun(); 
	} 
} 

