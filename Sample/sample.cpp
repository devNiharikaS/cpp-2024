#include <iostream>
using namespace std;
int main()
{

	int rows, i, j;
	cout << "Enter number of rows:" ;
	cin >> rows;{
	// outer loop is responsible for row
	for (i = 1; i <= rows; i++)
	{
		// inner loop is responsible for columns
		for (j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		// give line breaks after ending every row
		cout << "\n";}

	// first loop for printing all rows 
    for (int i = 0; i < rows; i++) { 
  
        // first inner loop for printing white spaces 
        for (int j = 0; j < 2 * i; j++) { 
            printf(" "); 
        } 
  
        // second inner loop for printing star * 
        for (int k = 0; k < rows - i; k++) { 
            printf("* "); 
        } 
        printf("\n"); 
	}
    } 
	return 0;
}