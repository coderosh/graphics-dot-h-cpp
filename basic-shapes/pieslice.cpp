#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char *)"");

    pieslice(200, 200, 0, 135, 100);

    getch();
    closegraph();
    return 0;
}