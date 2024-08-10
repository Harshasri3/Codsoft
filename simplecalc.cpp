#include<iostream>
using namespace std;
int main()
{
	char ch,c;
	int a,b;
	cout<<"Addition:\t+\n";
	cout<<"Subtraction:\t-\n";
	cout<<"Multiplication:\t*\n";
	cout<<"Division:\t/\n";
	do{
		cout<<"Enter the values:";
		cin>>a>>b;
		cout<<"Choose the operation:";
		cin>>ch;
		switch(ch)
		{
			case '+':cout<<"Result="<<a+b<<endl;
					break;
			case '-':cout<<"Result="<<a-b<<endl;
					break;
			case '*':cout<<"Result="<<a*b<<endl;
					break;
			case '/':if(b==0)
						cout<<"Cannot be divisible by zero\n";
					else
						cout<<"Result="<<a/b<<endl;
					break;
			default:cout<<"Enter a valid operator!!\n";
		}
		cout<<"Do you want to continue(y/n)";
		cin>>c;
	}while(c=='Y' || c=='y');
	
	return 0;
}
