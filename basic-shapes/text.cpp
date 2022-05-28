#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char *)"");

    outtext((char *)"Hello World");

    outtextxy(0, 460, (char *)"Roshan Acharya");

    getch();
    closegraph();
    return 0;
}