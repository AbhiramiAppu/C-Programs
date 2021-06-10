/*
 ============================================================================
 Name        : Plot.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */



#include <graphics.h>

#include <stdio.h>
#include <stdlib.h>
#include<conio.h>


void initgraph(int *graphicsDriver, int *graphicsMode, char *driverDirectoryPath);
void putpixel(int x, int y, int color);
void main()

{
	
    int gd = DETECT, gm, color;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    putpixel(85, 35, GREEN);

    putpixel(30, 40, RED);

    putpixel(115, 50, YELLOW);

    putpixel(135, 50, CYAN);

    putpixel(45, 60, BLUE);

    putpixel(20, 100, WHITE);

    putpixel(200, 100, LIGHTBLUE);

    putpixel(150, 100, LIGHTGREEN);

    putpixel(200, 50, YELLOW);

    putpixel(120, 70, RED);

    getch();

    closegraph();

}
