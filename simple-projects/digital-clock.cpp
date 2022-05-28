#include <ctime>
#include <graphics.h>

void set_text(char *, const int &, int &, int, int, int);

int main()
{
    int gd = DETECT, gm;

    tm *tm_local;
    time_t cur_time;
    char time_string[100];
    int FONT = COMPLEX_FONT;

    initgraph(&gd, &gm, (char *)"");

    while (true)
    {
        setcolor(LIGHTGREEN);
        rectangle(100, 100, 520, 400);
        rectangle(90, 90, 530, 410);

        time(&cur_time);
        tm_local = localtime(&cur_time);

        strftime(time_string, 50, "%H:%M:%S", tm_local);
        set_text(time_string, LIGHTRED, FONT, 7, 150, 150);

        strftime(time_string, 50, "%B %d, %Y", tm_local);
        set_text(time_string, LIGHTCYAN, FONT, 3, 210, 300);

        strftime(time_string, 50, "%A", tm_local);
        set_text(time_string, LIGHTBLUE, FONT, 2, 245, 330);

        delay(1000);
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}

void set_text(char *time_string, const int &color, int &font, int size, int x, int y)
{
    setcolor(color);
    settextstyle(font, HORIZ_DIR, size);
    outtextxy(x, y, time_string);
}