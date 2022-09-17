#include <iostream>
using namespace std;

unsigned factorial(int n){
int fact = 1;
for (int i = 2; i <= n; i++)
fact *=i;
return fact;
}
int main(){
	int num;
	cout << "Enter a number: ";
	cin>> num;
	
	cout<< "The factorial of "<<num <<" is "<< factorial(num);
	
	return 0;
}
