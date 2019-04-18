#include<iostream.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<string.h>
int z=10;
char square[9]={'1','2','3','4','5','6','7','8','9'};
int ar[10]={1,2,3,4,5,6,7,8,9};
void board1()               //User Defined Function for displaying the board for 1 player option
{ clrscr();
  cout<<"\n\n\tTic Tac Toe\n\n";
  cout<<"Player 1(X) User - Player 2(O)System\n\n";
  cout<<" "<<square[0]<<" | "<<square[1]<<" | "<<square[2]<<" \n";
  cout<<"-----------\n";
  cout<<" "<<square[3]<<" | "<<square[4]<<" | "<<square[5]<<" \n";
  cout<<"-----------\n";
  cout<<" "<<square[6]<<" | "<<square[7]<<" | "<<square[8]<<" \n";
}
void board2()               //User Defined Function for displaying the board for 2 players option
{ clrscr();
  cout<<"\n\n\tTic Tac Toe\n\n";
  cout<<"Player 1(X) - Player 2(O)\n\n";
  cout<<" "<<square[0]<<" | "<<square[1]<<" | "<<square[2]<<" \n";
  cout<<"-----------\n";
  cout<<" "<<square[3]<<" | "<<square[4]<<" | "<<square[5]<<" \n";
  cout<<"-----------\n";
  cout<<" "<<square[6]<<" | "<<square[7]<<" | "<<square[8]<<" \n";
}
int checkwin()             //User defined fucton for check whether there is a win or draw of continue after every entry
{  if(square[0] == square[1] && square[1] == square[2])
     return 1;
   else if(square[3] == square[4] && square[4] == square[5])
     return 1;
   else if(square[6] == square[7] && square[7] == square[8])
     return 1;
   else if(square[0] == square[3] && square[3] == square[6])
     return 1;
   else if(square[1] == square[4] && square[4] == square[7])
     return 1;
   else if(square[2] == square[5] && square[5] == square[8])
     return 1;
   else if(square[0] == square[4] && square[4] == square[8])
     return 1;
   else if(square[2] == square[4] && square[4] == square[6])
     return 1;
   else if(square[0] != '1' && square[1] != '2' && square[2] != '3' && square[3] != '4' && square[4] != '5' && square[5] != '6' && square[6] != '7' && square[7] != '8' && square[8] != '9')
     return 0;
   else
     return -1;
}
int main()
{ clrscr();
  int op;
  cout<<"\n\nTic Tac Toe Game Menu\n\n";
  cout<<"\nSelect any option\n";
  cout<<"1. 1 Player\n";
  cout<<"2. 2 Players\n";
  cout<<"3. Exit\n";
  cin>>op;
  if(op==1)                     //Source code for 1 player program
  {
  int i,choice,player=1;
    char mark;
    char mark1='X';
    char mark2='O';
    do
    { clrscr();
      board1();
      player=(player%2)?1:2;
      if(player==1)
      {   cout<<"Enter:";cin>>choice;
	  mark=mark1;
      }
	else                     //Source code for computer generating numbers
	{  randomize();
	   mark=mark2;
	   int s= random(z);
	   choice=ar[s];
	cout<<"system entered "<<choice;
	getch();
	}
	int h=0;
	{  h=1;
	if(choice == 1 && square[0] == '1')      //Source code for changing he inut number's place to the players letter
	 square[0] = mark;
	else if(choice == 2 && square[1] == '2')
	 square[1] = mark;
	else if(choice == 3 && square[2] == '3')
	 square[2] = mark;
	else if(choice == 4 && square[3] == '4')
	 square[3] = mark;
	else if(choice == 5 && square[4] == '5')
	 square[4] = mark;
	else if(choice == 6 && square[5] == '6')
	 square[5] = mark;
	else if(choice == 7 && square[6] == '7')
	 square[6] = mark;
	else if(choice == 8 && square[7] == '8')
	 square[7] = mark;
	else if(choice == 9 && square[8] == '9')
	 square[8] = mark;
	else
	{  h=0;
	   cout<<"Invalid move ";
	   player--;
	   getch();
	}
     }
	i=checkwin();
	player++;
      if(h==1)                            //deletion of input elements from initialised array
       {   for(int xx=0; xx<z;xx++)
	      { if(ar[xx]==choice)
		{  ar[xx]=0;
		     break;
		}
	      }
	    for(int xy=xx;xy<z ;xy++)
	       ar[xy]=ar[xy+1];
	 z--;
       }
  }while(i==-1);
    board1();
    if(i==1)
       cout<<"==>\aPlayer "<<--player<<" win ";
    else
       cout<<"==>\aGame draw";
    getch();
    return 0;
  }

  else if(op==2)               //Source code for 2 players game
  { int player=1,i,choice;
    char mark ;
    char mark1='X';
    char mark2='O';
    do
    {  clrscr();
       board2();
       player=(player%2)?1:2;  //Source Code for selection of players
       cout<<"\nPlayer " << player << ", enter a number:  ";
       cin>>choice;
       if(player==1)
	 mark=mark1;
       else
	 mark=mark2;
       if(choice == 1 && square[0] == '1')  //Source code for changing he inut number's place to the players letter
	 square[0] = mark;
       else if(choice == 2 && square[1] == '2')
	 square[1] = mark;
       else if(choice == 3 && square[2] == '3')
	 square[2] = mark;
       else if(choice == 4 && square[3] == '4')
	 square[3] = mark;
       else if(choice == 5 && square[4] == '5')
	 square[4] = mark;
       else if(choice == 6 && square[5] == '6')
	 square[5] = mark;
       else if(choice == 7 && square[6] == '7')
	 square[6] = mark;
       else if(choice == 8 && square[7] == '8')
	 square[7] = mark;
       else if(choice == 9 && square[8] == '9')
	 square[8] = mark;
       else
       {  cout<<"Invalid move ";
	  player--;
	  getch();
       }
       i=checkwin();
       player++;

    } while(i==-1);
    clrscr();
    board2();
    if(i==1)
      cout<<"\n==>\aPlayer "<<--player<<" win ";
    else
      cout<<"\n==>\aGame draw";
    getch();
    return 0;
  }
  else if (op==3)
    exit(0);
getch();
return 0;
}
