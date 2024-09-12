#include<iostream>
using namespace std;

int main(){
	
	double num1, num2, result;
	char op;
	
	cout<<"Enter num1: ";
	cin>>num1;
	cout<<"Enter num2: ";
	cin>>num2;
	cout<<endl;
	cout<<"Enter an operator (+ , - , * , / ): ";
	cin>>op;
	
	if(op == '+'){
		result = num1 + num2;
		cout<<"Addition: " << num1 <<" + "<< num2 <<" = "<<result <<endl;
	}
	
	else if(op == '-'){
		result = num1 - num2;
		cout<<"Addition: " << num1 <<" - "<< num2 <<" = "<<result <<endl;
	}
	
	else if(op == '*'){
		result = num1 * num2;
		cout<<"Addition: " << num1 <<" * "<< num2 <<" = "<<result <<endl;
	}
	
	else if(op == '/'){
		result = num1 / num2;
		cout<<"Addition: " << num1 <<" / "<< num2 <<" = "<<result <<endl;
	}
	
	else{
		
		cout<<"Error! Invalid operator"<<endl;
	}
	
	
}
