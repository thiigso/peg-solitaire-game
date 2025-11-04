#include <stdio.h>
#include <conio.h>

#define ROWS 7
#define COLUMNS 7

#define SELECTED 2
#define FILLED 1
#define EMPTY 0
#define OUT -1
#define OUTBOARD -2
#define ERROR -3


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

int SelectPiece(int position[]){

    int key1, key2;


    do{
        key1 = _getch();

        printf("key1 %d \n",key1);

        if(key1 == 13){
            return 2;
        }
        else if(key1 == 224){
            switch (key2 = _getch()){
                case 75:  //Left
                    if(position[1] != 0 && position[1] != 6){
                        position[1]--;
                        break;
                    }
                    else{
                        return OUTBOARD;
                        break;
                    }
                case 72:  //Up
                    if(position[0] != 0 && position[0] != 6){
                        position[0]--;
                        break;
                    }
                    else{
                        return OUTBOARD;
                        break;
                    }
                case 77:  //Right
                    if(position[1] != 0 && position[1] != 6){
                        position[1]++;
                        break;
                    }
                    else{
                        return OUTBOARD;
                        break;
                    }
                case 80:  //Down
                    if(position[0] != 0 && position[0] != 6){
                        position[0]++;
                        break;
                    }
                    else{
                        return OUTBOARD;
                        break;
                    }
                default:
                    return ERROR;
            }
        
        printf(" posrow %d - poscol %d\n",position[0], position[1]);
        }

    }while(key1 == 224);
    

    return ERROR;

}

void PrintGame(int matrix[ROWS][COLUMNS],int position[]){

    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLUMNS; j++){
            if(i == position[0] && j == position[1]){
                printf("%5c",554);
                continue;
            }
            printf("%5d",matrix[i][j]);
        }
        printf("\n\n");
    }

}


int main(){
    
    int matrix[ROWS][COLUMNS];
    int position[2] = {3,3}, status;

    InitializeGame(matrix);
    PrintGame(matrix,position);


    status = SelectPiece(position);
    printf("%d",status);

    if(status == SELECTED)
        printf("Available to check\n");
    printf("out posrow %d - poscol %d\n",position[0], position[1]);



    return 0;
}