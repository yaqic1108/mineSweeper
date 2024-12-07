#include <iostream> 

using namespace std; 

// int DIFFICULTY; 
int SIZE; 
int MINES; 

class Board{
    public:
        // char board[SIZE][SIZE]; 

        Board(){
            // char board[SIZE][SIZE];  //char** is used to create a 2D array of characters 
            board = new char*[SIZE]; 
            for (int i = 0; i < SIZE; i++){
                // board[i] = new char[SIZE]; 
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
        SIZE = 10; 
        MINES = 10; 
    }
}
sdfsdfadf
int main(){

}
