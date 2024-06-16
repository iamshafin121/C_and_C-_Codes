#include <stdio.h>
#include <math.h>

int main(){
     
    int matrix[5][5], row = 1, column = 1, moves;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j] == 1){
                row += i;
                column += j;
            }
        }
    }
    moves = abs(row-3);
    moves += abs(column-3);
    printf("%d\n",moves);
     
    return 0;
}