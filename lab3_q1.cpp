// first include library
#include<iostream>
using namespace std;
//write the name function
int main()
{
// declare the variables
int a, b;
int sum,diff,mult,div,mod;
a = 15;
b = 5;
//process
sum = a + b;
diff = a - b;
mult = a * b;
div = a / b;
mod =a % b;
// print out the results
cout << "sum of a and b is" << sum << "\n";
cout << "difference of a and b is" << diff << "\n";
cout << "multiplication of a and b is" << mult << "\n";
cout << "division of a and b is" << div << "\n";
cout << "modulus of a and b is" << mod << "\n";
// terminate program
return 0; 
}
