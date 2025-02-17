#include<stdio.h>
 int main(){
    printf("Welcome to My Game!!!\n\n");
    printf("Please follow the rule\n");
    printf(" 1 | 2 | 3 ");
    printf("\n---+---+---\n");
    printf(" 4 | 5 | 6 ");
    printf("\n---+---+---\n");
    printf(" 7 | 8 | 9 ");
    printf("\n");

    int n[9] = {0};
    int m[9] = {0};
    int player1;

    while(1){
        printf("O(1)/X(2):");
        scanf("%d",&player1);

        if(player1 == 1){
            printf("O go first\n");
            break;
        }
        else if(player1 == 2){
            printf("X go first\n");
            break;
        }
        else{
            printf("Please type O or X !!!\n");
        }
    }

    int area1;
    int area2;
    int tie1;
    int tie2;

    while(1){
        if(player1== 1){

            printf("%c choose your area:",'O');
            scanf("%d",&area1);

            if((n[area1-1] == 1)||(m[area1-1] == 1)){
                printf("Please follow the rule!!!!!!!!\n");
            }
            else{
                n[area1-1] = 1;
                printf("\n");
                printf(" %c | %c | %c ",((n[0] == 0) && (m[0] == 0))?' ':((n[0] == 1)?'O':'X') ,((n[1] == 0) && (m[1] == 0))?' ':((n[1] == 1)?'O':'X'), ((n[2] == 0) && (m[2] == 0))?' ':((n[2] == 1)?'O':'X'));
                printf("\n---+---+---\n");
                printf(" %c | %c | %c ",((n[3] == 0) && (m[3] == 0))?' ':((n[3] == 1)?'O':'X') ,((n[4] == 0) && (m[4] == 0))?' ':((n[4] == 1)?'O':'X'), ((n[5] == 0) && (m[5] == 0))?' ':((n[5] == 1)?'O':'X'));
                printf("\n---+---+---\n");
                printf(" %c | %c | %c ",((n[6] == 0) && (m[6] == 0))?' ':((n[6] == 1)?'O':'X') ,((n[7] == 0) && (m[7] == 0))?' ':((n[7] == 1)?'O':'X'), ((n[8] == 0) && (m[8] == 0))?' ':((n[8] == 1)?'O':'X'));
                printf("\n");
                player1 = 2;
            }

            if(((n[0]==1) && (n[1]==1) && (n[2]==1))||((n[3]==1) && (n[4]==1) && (n[5]==1))||((n[6]==1) && (n[7]==1) && (n[8]==1))||((n[0]==1) && (n[4]==1) && (n[8]==1))||((n[2]==1) && (n[4]==1) && (n[6]==1))||((n[0]==1) && (n[3]==1) && (n[6]==1))||((n[1]==1) && (n[4]==1) && (n[7]==1))||((n[2]==1) && (n[5]==1) && (n[8]==1)) )
            {
                printf("O win");
                break;
            }

            tie1 = 0;
            int i;
            for(i=0;i<9;i++){
                tie1 += (m[i] + n[i]);
            }
            if(tie1 == 9){
                printf("Tie!!!!!");
                break;
            }
        }
        else if(player1== 2){

            printf("%c choose your area:",'X');
            scanf("%d",&area2);

            if((n[area2-1] == 1)||(m[area2-1] == 1)){
                printf("Please follow the rule!!!!!!!!\n");
            }
            else{
                m[area2-1] = 1;
                printf("\n");
                printf(" %c | %c | %c ",((n[0] == 0) && (m[0] == 0))?' ':((m[0] == 1)?'X':'O') ,((n[1] == 0) && (m[1] == 0))?' ':((m[1] == 1)?'X':'O'), ((n[2] == 0) && (m[2] == 0))?' ':((m[2] == 1)?'X':'O'));
                printf("\n---+---+---\n");
                printf(" %c | %c | %c ",((n[3] == 0) && (m[3] == 0))?' ':((m[3] == 1)?'X':'O') ,((n[4] == 0) && (m[4] == 0))?' ':((m[4] == 1)?'X':'O'), ((n[5] == 0) && (m[5] == 0))?' ':((m[5] == 1)?'X':'O'));
                printf("\n---+---+---\n");
                printf(" %c | %c | %c ",((n[6] == 0) && (m[6] == 0))?' ':((m[6] == 1)?'X':'O') ,((n[7] == 0) && (m[7] == 0))?' ':((m[7] == 1)?'X':'O'), ((n[8] == 0) && (m[8] == 0))?' ':((m[8] == 1)?'X':'O'));
                printf("\n");
                player1 = 1;
            }

            if(m[4]==1){
                if((m[1]==1)&&(m[7]==1)){
                    printf("X win!!!!!");
                    break;
                }
                else if((m[0]==1)&&(m[8]==1)){
                    printf("X win!!!!!");
                    break;
                }
                else if((m[2]==1)&&(m[6]==1)){
                    printf("X win!!!!!");
                    break;
                }
                else if((m[3]==1)&&(m[5]==1)){
                    printf("X win!!!!!");
                    break;
                }
            }
            else if(m[0]==1){
                if((m[1]==1)&&(m[2]==1)){
                    printf("X win!!!!!");
                    break;
                }
                else if((m[3]==1)&&(m[6]==1)){
                    printf("X win!!!!!");
                    break;
                }
            }
            else if(m[8]==1){
                if((m[6]==1)&&(m[7]==1)){
                    printf("X win!!!!!");
                    break;
                }
                else if((m[2]==1)&&(m[5]==1)){
                    printf("X win!!!!!");
                    break;
                }
            }

            tie2 = 0;
            int i;
            for(i=0;i<9;i++){
                tie2 += (m[i] + n[i]);
            }
            if(tie2 == 9){
                printf("Tie!!!!!");
                break;
            }

        }

    }

 }
