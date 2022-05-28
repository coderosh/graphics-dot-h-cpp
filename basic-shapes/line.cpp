#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char *)"");

    setcolor(RED);

    line(20, 235, 620, 235);
    line(20, 245, 620, 245);

    getch();
    closegraph();
    return 0;
}