#include<iostream>
using namespace std;

int main(){
	
	double num1,num2,result;
	char op;
	
	cout<<"Enter num1: ";
	cin>>num1;
	cout<<"Enter num2: ";
	cin>>num2;
	cout<<endl;
	cout<<"Enter an operator (+ , - , * , / ): ";
	cin>>op;
	
	switch(op){
		
		case '+':
			result = num1 + num2 ;
			cout<<"Addition: " << num1 <<" + "<< num2 <<" = "<<result <<endl;
		break;
		
		case '-':
			result = num1 - num2 ;
			cout<<"Subtraction: " << num1 <<" - "<< num2 <<" = "<<result <<endl;
		break;
		
		case '*':
			result = num1 * num2 ;
			cout<<"Multiplication: " << num1 <<" * "<< num2 <<" = "<<result <<endl;
		break;
		
		case '/':
			result = num1 / num2 ;
			cout<<"Division: " << num1 <<" / "<< num2 <<" = "<<result <<endl;
		break;
		
		default:
			cout<"Error! Operator is not correct";
		
		
	
	}
	
	
	

}
