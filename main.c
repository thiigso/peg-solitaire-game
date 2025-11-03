#include <stdio.h>
#include <conio.h>

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

void SelectPiece(int positioRow, int positionColumn){

    int key1, key2;


    while(_getch() != 13){

        key1 = _getch();
        key2 = _getch();

        if(key1 == 224){
            if(key1 == 77){
                if(positionColumn != 0 && positionColumn != 6)
            }
        }
        
    }

    //getch

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
    int temp, temp2;

    //InitializeGame(matrix);
    //PrintGame(matrix);

    temp = _getch();
    temp2 = _getch();
    printf("%d %d",temp, temp2);


    return 0;
}