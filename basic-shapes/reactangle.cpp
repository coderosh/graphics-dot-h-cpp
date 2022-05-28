#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char *)"");

    int x = 100, y = 100, task = 0, factor = 10;

    while (true)
    {
        if (kbhit())
            break;

        if (y + 100 >= 480)
            task = 1;
        else if (y < -0)
            task = 0;

        if (task == 0)
            y += factor;
        else
            y -= factor;

        rectangle(x, y, x + 100, y + 100);

        delay(10);
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}