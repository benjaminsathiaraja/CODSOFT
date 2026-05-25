#include<iostream>
using namespace std;
void displayBoard(char board[3][3]){
  cout<<"\n";
  for(int i=0;i<3;i++){
    cout<<" ";
    for(int j=0;j<3;j++){
      cout<<board[i][j];
      if(j<2)
      cout<<" | ";
    }
    cout<<"\n";
    if(i<2)
    cout<<"---|---|---\n";
  }
  cout<<"\n";
}
bool checkWin(char board[3][3],char player){
  for(int i=0;i<3;i++){
    if(board[i][0]==player&&board[i][1]==player&&board[i][2]==player)
    return true;
  }
  for(int i=0;i<3;i++){
    if(board[0][i]==player&&board[1][i]==player&&board[2][i]==player)
    return true;
  }
  if(board[0][0]==player&&board[1][1]==player&&board[2][2]==player)
  return true;
  if(board[0][2]==player&&board[1][1]==player&&board[2][0]==player)
  return true;
  return false;
}
bool checkDraw(char board[3][3]){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(board[i][j]!='X'&&board[i][j]!='O')
      return false;
    }
  }
  return true;
}
int main(){
  char playAgain;
  do{
    char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    char currentPlayer='X';
    int choice,row,col;
    bool gameOver=false;
    cout<<"===== TIC-TAC-TOE GAME =====\n";
    while(!gameOver){
      displayBoard(board);
      cout<<"Player "<<currentPlayer<<", enter your move (1-9): ";
      cin>>choice;
      row=(choice-1)/3;
      col=(choice-1)%3;
      if(choice<1||choice>9||board[row][col]=='X'||board[row][col]=='O'){
        cout<<"Invalid move! Try again.\n";
        continue;
      }
      board[row][col]=currentPlayer;
        if(checkWin(board,currentPlayer)){
        displayBoard(board);
        cout<<"Player "<<currentPlayer<<" wins!\n";
        gameOver=true;
      }
      else if(checkDraw(board)){
        displayBoard(board);
        cout<<"Game is a draw!\n";
        gameOver=true;
      }
      else{
        currentPlayer=(currentPlayer=='X')?'O':'X';
      }
    }
    cout<<"Do you want to play again? (y/n): ";
    cin>>playAgain;
  }while(playAgain=='y'||playAgain=='Y');
  cout<<"Thanks for playing!\n";
  return 0;
}
