#include<iostream>
#include<ctime>
#include <cstdlib>
using namespace std;
void displayBoard(char *space);
void playerMove(char *space,char player);
void computerMove(char *space,char computer);
bool checkWinner(char *space,char player,char computer);
bool checkTie(char *space);
int main()
{
	char ch;
    do{
    	char space[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
	    char player='X';
	    char computer='O';
    	bool running=true;
    	displayBoard(space);
	    while(running)
	    {
	    	playerMove(space,player);
	    	displayBoard(space);
	    	if(checkWinner(space,player,computer))
	    	{
	    		running=false;
	    		break;
			}
			else if(checkTie(space))
			{
				running=false;
				break;
			}
	    	computerMove(space,computer);
	    	displayBoard(space);
	    	if(checkWinner(space,player,computer))
	    	{
	    		running=false;
	    		break;
			}
			else if(checkTie(space))
			{
				running=false;
				break;
			}
		}
		cout<<"Thanks for playing!!\n";
		cout<<"Do you want to play again?(y/n)";
		cin>>ch;
	}while(ch=='Y' || ch=='y');
	return 0;
}
void displayBoard(char *space)
{
    std::cout<<"\n";
    std::cout<<"     |     |     "<<"\n";
    std::cout<<"  "<<space[0]<<"  |  "<<space[1]<<"  |  "<<space[2]<<"  "<<"\n";
    std::cout<<"_____|_____|_____"<<"\n";
    std::cout<<"     |     |     "<<"\n";
    std::cout<<"  "<<space[3]<<"  |  "<<space[4]<<"  |  "<<space[5]<<"  "<<"\n";
    std::cout<<"_____|_____|_____"<<"\n";
    std::cout<<"     |     |     "<<"\n";
    std::cout<<"  "<<space[6]<<"  |  "<<space[7]<<"  |  "<<space[8]<<"  "<<"\n";
    std::cout<<"     |     |     "<<"\n";
    std::cout<<"\n";
}
void playerMove(char *space,char player)
{
	int num;
	do{
		cout<<"Enter a spot to place a marker(1-9)";
		cin>>num;
		num--;
		if(space[num]==' ')
		{
			space[num]=player;
			break;
		}
	}while(!num>0 || !num<8);

}
void computerMove(char *space,char computer)
{
	int num;
	srand(time(0));//generate random number
	while(true)
	{
		num=rand()%9;//1-9
		if(space[num]==' ')
		{
			space[num]=computer;
			break;
		}
	}

}
bool checkWinner(char *space,char player,char computer)
{
    if(space[0]!=' ' && space[0]==space[1] && space[1]==space[2])
    {
    	space[0]==player?cout<<"YOU WIN!!\n":cout<<"YOU LOSE!!\n";
	}
	else if(space[3]!=' ' && space[3]==space[4] && space[4]==space[5])
    {
    	space[3]==player?cout<<"YOU WIN!!\n":cout<<"YOU LOSE!!\n";
	}
	else if(space[6]!=' ' && space[6]==space[7] && space[7]==space[8])
    {
    	space[6]==player?cout<<"YOU WIN!!\n":cout<<"YOU LOSE!!\n";
	}
	else if(space[0]!=' ' && space[0]==space[3] && space[3]==space[6])
    {
    	space[0]==player?cout<<"YOU WIN!!\n":cout<<"YOU LOSE!!\n";
	}
	else if(space[1]!=' ' && space[1]==space[4] && space[4]==space[7])
    {
    	space[1]==player?cout<<"YOU WIN!!\n":cout<<"YOU LOSE!!\n";
	}
	else if(space[2]!=' ' && space[2]==space[5] && space[5]==space[8])
    {
    	space[2]==player?cout<<"YOU WIN!!\n":cout<<"YOU LOSE!!\n";
	}
	else if(space[0]!=' ' && space[0]==space[4] && space[4]==space[8])
    {
    	space[0]==player?cout<<"YOU WIN!!\n":cout<<"YOU LOSE!!\n";
	}
	else if(space[2]!=' ' && space[2]==space[4] && space[4]==space[6])
    {
    	space[2]==player?cout<<"YOU WIN!!\n":cout<<"YOU LOSE!!\n";
	}
	else return false;
	return true;
}
bool checkTie(char *space)
{
	for(int i=0;i<9;i++)
	{
		if(space[i]==' ')
			return false;
	}
	cout<<"IT'S A TIE!!\n";
	return true;
}
