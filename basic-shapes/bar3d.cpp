#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char *)"");

    bar3d(100, 100, 200, 480, 20, 1);

    bar3d(420, 100, 520, 480, 20, 1);

    getch();
    closegraph();
    return 0;
}