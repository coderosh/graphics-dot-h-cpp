#include <graphics.h>

int main()
{
    int gd = DETECT, gm, points[] = {100, 100, 200, 100, 200, 200, 100, 200, 100, 100};

    initgraph(&gd, &gm, (char *)"");

    drawpoly(5, points);

    getch();
    closegraph();
    return 0;
}