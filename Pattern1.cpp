#include <iostream>
/* Draw pattern as given below.
   *****
   ****
   ***
   **
   *

using namespace std;
int main() {
	// Your code goes here;
	int n = 5;
	for(int i = n;i > 0; i --)
	{
        for(int j = 1; j <= i; j++)
	    {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
