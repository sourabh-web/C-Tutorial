 #include <iostream> 
using namespace std; 

int main() 
{ 
	int a = 27, b = 1; 
 
	if (a > b) 
		cout << "a is greater than b\n"; 
	else
		cout << "a is less than or equal to b\n"; 
 
	if (a >= b) 
		cout << "a is greater than or equal to b\n"; 
	else
		cout << "a is lesser than b\n"; 
		 
	if (a < b) 
		cout << "a is less than b\n"; 
	else
		cout << "a is greater than or equal to b\n"; 
 
	if (a <= b) 
		cout << "a is lesser than or equal to b\n"; 
	else
		cout << "a is greater than b\n"; 
 
	if (a == b) 
		cout << "a is equal to b\n"; 
	else
		cout << "a and b are not equal\n";
		
	if (a != b) 
		cout << "a is not equal to b\n"; 
	else
		cout << "a is equal b\n"; 

	return 0; 
} 

