#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <MMsystem.h>


char pos[10]={'o','1','2','3','4','5','6','7','8','9'};
int checkwin();
void drawboard();

int main(){
    system("color 1b");
    int player =1,i,choice;
    char mark; //X or O
    do {
        drawboard();
        player=(player % 2) ? 1 : 2;
        printf("player %d, enter the choice:", player);
        scanf("%d", &choice);
        mark=(player==1)? 'X' : 'O' ;
        
        if (choice==1 && pos[1]=='1')
            pos[1]= mark;
        else if (choice ==2 && pos[2]=='2')
            pos[2]= mark;
        else if (choice ==3 && pos[3]=='3')
            pos[3]= mark;
        else if (choice ==4 && pos[4]=='4')
            pos[4]= mark;
        else if (choice ==5 && pos[5]=='5')
            pos[5]= mark;
        else if (choice ==6 && pos[6]=='6')
            pos[6]= mark;
        else if (choice ==7 && pos[7]=='7')
            pos[7]= mark;
        else if (choice ==8 && pos[8]=='8')
            pos[8]= mark;
        else if (choice ==9 && pos[9]=='9')
            pos[9]= mark;
        else {
            printf("invalid option");
            player-- ;
            getch();
        }
        i=checkwin();
        player++;
        
    }while(i==-1);
    drawboard();

    if (i==1){
        printf("==>player %d won", --player);

    }
    else{
        printf("==>Game over");
        

    }
    getch();
    return 0;

}
int checkwin(){
    if (pos[1]==pos[2] && pos[2]==pos[3])
        return 1;
    else if (pos[4]==pos[5] && pos [5]==pos[6])
        return 1;
    else if (pos[7]==pos[8] && pos[8]==pos[9])
        return 1;
    else if (pos[1]==pos[4] && pos[4]==pos[7])
        return 1;
    else if (pos[2]==pos[5] && pos[5]==pos[8])
        return 1;
    else if (pos[3]==pos[6] && pos[6]==pos[9])
        return 1;
    else if (pos[1]==pos[5] && pos[5]==pos[9])
        return 1;
    else if (pos[3]==pos[5] && pos[5]==pos[7])
        return 1;
    else if (pos[1]!= '1' && pos[2]!='2' && pos[3]!= '3' && pos[4]!= '4' && pos[5]!= '5' && pos[6]!='6' && pos[7]!= '7' && pos[8]!= '8' && pos[9]!= '9')
        return 0;
    else 
        return -1;
}
void drawboard(){
    system("cls");
    printf("\n\n\t tic tac toe \n\n");
    printf("player1(X) - player2(O) \n\n\n");
    printf("      |     |    \n");
    printf("   %c  |    %c   |    %c   \n", pos[1], pos[2],pos[3]);
    printf("_____|_____|____\n");
    printf("      |     |    \n");
    printf("   %c  |    %c   |    %c   \n", pos[4], pos[5],pos[6]);
    printf("_____|_____|____\n");
    printf("      |     |    \n");
    printf("   %c  |    %c   |    %c   \n", pos[7], pos[8],pos[9]);        
}
