//
//  main.c
//  游戏优化
//
//  Created by 王迪 on 16/3/11.
//  Copyright © 2016年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
#include <stdio.h>
#define COL 6
#define ROW 6
    void printMap(char map[ROW][COL]){
        for (int i=0; i<ROW; i++) {
            for (int j=0; j<COL; j++) {
                printf("%c",map[i][j]);
            }
            printf("\n");
        }
    }
    void personMove(char map[ROW][COL],int oldX,int oldY,int newX,int newY){
        char temp;
        temp = map[oldX][oldY];
        map[oldX][oldY]= map[newX][newY];
        map[newX][newY]=temp;
    }
    int main(int argc, const char * argv[]) {
        char map[ROW][COL]={
            {'#','#','#','#','#','#',},
            {'#','0','#','#',' ',' ',},
            {'#',' ','#','#',' ','#',},
            {'#',' ',' ','#',' ','#',},
            {'#','#',' ',' ',' ','#',},
            {'#','#','#','#','#','#',}
        };
        char direction;
        int currentX=1;
        int currentY=1;
        char street=' ';
        char ch;
        printMap(map);
    }
    printf("请控制小人移动：w上，s下，a左，d右 q退出\n");
    while (1) {
        scanf("%c",&ch);
        scanf("%c",&direction);
        switch (direction) {
            case 'w':
            case 'W':
                if (map[currentX-1][currentY]==street) {
                    personMove(map,currentX,currentY,currentX-1,currentY);
                    currentX--;
                }
                break;
            case 'a':
            case 'A':
                if (map[currentX][currentY-1]==street) {
                    personMove(map,currentX,currentY,currentX,currentY-1);
                    currentY--;
                }
                break;
            case 's':
            case 'S':
                if (map[currentX+1][currentY]==street) {
                    personMove(map,currentX,currentY,currentX+1,currentY);
                    currentX++;
                }
                break;
            case 'd':
            case 'D':
                if (map[currentX][currentY+1]==street) {
                    personMove(map,currentX,currentY,currentX,currentY+1);
                    currentY++;
                }
                break;
            case 'q':
            case 'Q':
                return 0;
                break;
            default:
                break;
        }
        printMap(map);            }
    if (currentY==COL-1) {
        printf("you win!\n");
    }
}
return 0;
}
return 0;
}
