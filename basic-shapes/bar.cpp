#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    int y = 100;

    initgraph(&gd, &gm, (char *)"");

    bar(20, 480, 100, y);
    bar(120, 480, 200, y + 300);
    bar(220, 480, 300, y + 190);
    bar(320, 480, 400, y + 220);
    bar(420, 480, 500, y + 10);
    bar(520, 480, 600, y + 40);

    getch();
    closegraph();
    return 0;
}