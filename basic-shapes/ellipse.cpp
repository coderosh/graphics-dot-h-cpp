#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char *)"");

    ellipse(320, 240, 0, 360, 200, 150);

    getch();
    closegraph();
    return 0;
}