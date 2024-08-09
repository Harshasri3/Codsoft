#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int num;
	int guess;
	int chances;
	
	srand(time(NULL));
	num=(rand()%100)+1;
	cout<<"**********NUMBER GUESSING GAME**********\n";
	do{
		cout<<"Guess a number between 1 to 100:";
		cin>>guess;
		chances++;
		if(guess>num)
		{
			cout<<"Too high!!\n";
		}
		else if(guess<num)
		{
			cout<<"Too low!!\n";
		}
		else
		{
			cout<<"CONGRATULATIONS! You have successfully guessed the correct number\n";
			cout<<"Chances taken to guess the correct number:"<<chances;
		}
	}while(guess!=num);
	return 0;
};
