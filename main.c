#include <stdio.h>

#define ROWS 7
#define COLUMNS 7

#define FILLED 1
#define EMPTY 0
#define OUT -1


void InitializeGame(int matrix[ROWS][COLUMNS]){

    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLUMNS; j++){

            matrix[i][j] = FILLED;

            if(i==0 || i==1 || i==5 || i==6){
                if(j==0 || j==1 || j==5 || j==6){
                    matrix[i][j] = OUT;
                }
            }
            else if(i==3 && j==3){
                matrix[i][j] = EMPTY;
                
            }

        }
    }
}

void VerifyEndGame(){

}

void MakeMove(){

}

void PrintGame(int matrix[ROWS][COLUMNS]){

    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLUMNS; j++){
            printf("%3d",matrix[i][j]);
        }
        printf("\n");
    }

}


int main(){
    
    int matrix[ROWS][COLUMNS];

    InitializeGame(matrix);
    PrintGame(matrix);

    return 0;
}