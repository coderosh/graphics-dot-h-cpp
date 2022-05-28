#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    int x = 320, y = 240, radius = 0, task = 0;

    initgraph(&gd, &gm, (char *)"");

    while (true)
    {

        if (kbhit())
            break;

        if (task == 0)
            radius += 20;
        else
            radius -= 20;

        if (radius == 400)
            task = 1;

        if (radius == 0)
            task = 0;

        circle(x, y, radius);
        delay(40);
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}