#include <iostream>
#include <cstring>
using namespace std;

#define SIZE 3

char board[SIZE][SIZE];


void printBoard()
{
  system("clear");
  cout << "+-----+-----+-----+" << endl;
  for(int i = 0; i < SIZE; i++) {
    cout << "|     |     |     |" << endl;
    cout << "|  " << board[i][0] << "  |  " 
      << board[i][1] << "  |  " 
      << board[i][2] << "  |"<< endl;
    cout << "|     |     |     |" << endl;
    cout << "+-----+-----+-----+" << endl;
  }
}

void init()
{
  memset(board, ' ', sizeof(board)/sizeof(board[0][0]));
  printBoard();
}

bool end() 
{ 
  return false;
}

void input()
{
  cout << "please input 1-9 to place stone: ";
  int cell;
  cin >> cell;
  cell--;
  if(0 <= cell && cell < 9 && board[cell/SIZE][cell%SIZE] == ' ') {
    board[cell/SIZE][cell%SIZE] = 'X';
  }
}

void start()
{
  while(!end()) {
    input();
    printBoard();
  }
}

int main()
{
  init();
  start();
}
