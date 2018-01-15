#include <iostream>
using namespace std;

int main(){
	int i,j,rows;
	cout <<"\n\n display the pattern like right angle triangle using an asterisk:\n";
	cout <<"---------------------------------------------------------------------\n";
	cout <<"input number of rows:";
	cin  >>rows;
	for(i=1;i<=rows;i++)
   {  
	for(j=1;i<=i;j++)
	 cout << "+";
	cout << endl;
   }
}
