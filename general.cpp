// Arrays
#include <iostream>

using namespace std;

int main()
{
	/*string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
for(int i = 0; i < 4; i++) {
  cout << cars[i] << "\n";
}*/

string exercise[3]	 = {"Running", "Sprinting", "Pushups"};
for(int z = 0; z < 3; z++)
{
	cout << z << ": " << exercise[z] << endl;// Tells the index of the element together with its value
	cout << exercise[z] << endl;
}
}
