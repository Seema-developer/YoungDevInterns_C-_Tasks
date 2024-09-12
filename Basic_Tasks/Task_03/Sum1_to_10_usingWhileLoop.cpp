#include <iostream>
using namespace std;
 
int main()
{
	int sum = 0;
	int count = 1;
	while(count<=10)
	{
		sum += count;
		count++;		
	}
	cout<<"The sum of numbers from 1 to 10 is: "<<sum<<endl;
	
}
