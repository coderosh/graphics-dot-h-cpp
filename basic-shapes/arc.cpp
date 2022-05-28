#include <graphics.h>

// arc(xposition, yposition, startangle, endangle, radius)

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char *)"");

    for (int i = 0; i <= 360; (i += 10))
    {
        cleardevice();
        arc(320, 240, -i, 1, 50);
        delay(60);
    }

    getch();
    closegraph();
    return 0;
}