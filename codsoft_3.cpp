// Program to implement tic-tac-toe game

#include<iostream>
#include<vector>
using namespace std;

bool checkWin(char board[3][3],char player)
{
  for(int i=0;i<3;i++)
  {
    if(board[i][0] == player && board[i][1] == player && board[i][2] == player)
      return true;
    if(board[0][i] == player && board[1][i] == player && board[2][i] == player)
      return true;
    if(board[0][0] == player && board[1][1] == player && board[2][2] == player)
      return true;
    if(board[0][2] == player && board[1][1] == player && board[2][0] == player)
      return true;
  }
  return false;
}
void boardDraw(char board[3][3])
{
  cout<<"\n-------------\n";
  for(int i=0;i<3;i++)
  {
    cout<<"| ";
    for(int j=0;j<3;j++)
      cout<<board[i][j]<<" | ";
    cout<<"\n-------------\n";
  }
}
int main()
{
  char response;
  cout<<"Welcome to Tic Tac Toe game"<<endl;
  do
  { char board[3][3]={{' ',' ',' '},
                      {' ',' ',' '},
                      {' ',' ',' '}};
    char player;
    while(true)
    {
      cout<<"\nChoose player(X or O): ";
      cin>>player;
      if(player == 'X' || player == 'x' || player == 'O' || player == 'o')
        break;
      else
        cout<<"Invalid player! Choose again"<<endl;
    }
    int row,col,turn;
    boardDraw(board);
    for(turn = 0;turn < 9;turn++)
    {
      while(true)
      {
        cout<<"Enter row(0-2) and column(0-2) to place "<<player<<" in : ";
        cin>>row>>col;
        if(board[row][col] != ' ' || row > 2 || col > 2)
          cout<<"Invalid move! Try again"<<endl;
        else 
          break;
      }
      board[row][col] = player;
      if(checkWin(board,player))
      {
        boardDraw(board);
        cout<<"Player \""<<player<<"\" wins!"<<endl;
        break;
      }
      boardDraw(board);
      if(player == 'X' || player == 'x')
        player = 'O';
      else
        player = 'X';
    }
    if(turn == 9 && !checkWin(board,player))
      cout<<"Match draw!"<<endl;
    cout<<"Wish to play again(y/n)?: ";
    cin>>response;
  }while(response == 'y' || response == 'Y');
  return 0;
}
