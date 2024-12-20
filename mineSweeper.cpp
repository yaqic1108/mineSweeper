#include <iostream> 

using namespace std; 

// int DIFFICULTY; 
int SIZE; 
int MINES; 

bool validMove(int x, int y){
    if(x <= SIZE || y <= SIZE){
        return true; 
    }else{
        return false; 
    }
}

class Board{
    public:
        // char board[SIZE][SIZE]; 

        Board(){
            // char board[SIZE][SIZE];  //char** is used to create a 2D array of characters 
            char** board = new char*[SIZE]; 
            for (int i = 0; i < SIZE; i++){
                board[i] = new char[SIZE]; 
                for (int j = 0; j < SIZE; j++){
                    board[i][j] = '-'; 
                }
            }
            
            placeMines(); 
        }
        // 
    private: 
        void placeMines(){
            int mines; 
            char board[SIZE][SIZE]; 

            if (mines != MINES){
                int x = rand() % SIZE; 
                int y = rand() % SIZE; 
                if (board[x][y] != '*'){
                    board[x][y] = '*';
                    mines++; 
                }
            }
        }

};

class Game{
    public: 
        
};

void playMineSweeper(){
    cout << "Mine Sweeper" << endl; 

}

void chosedifficulty(){
    int difficultyLevel; 

    cout << "Enter level of Difficulty: " << endl; 
    cout << "Enter 1 for Beginner" << endl; 
    cout << "Enter 2 for Intermediate" << endl; 
    cout << "Enter 3 for Advanced" << endl; 

    cin >> difficultyLevel;
    
    if (difficultyLevel == 1){
        SIZE =  9; 
        MINES = 10; 
    }
    if (difficultyLevel == 2){
        SIZE = 16; 
        MINES = 40; 
    }
    if (difficultyLevel == 3){
        SIZE = 24; 
        MINES = 99; 
    }
}

int main(){

}
