#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void birthday_note(void);

int main(void)
{

    birthday_note();
    system("COLOR 0F");
    Beep(587,500);

    system("COLOR 1E");
    Beep(659,500);

    system("COLOR 27");
    Beep(587,500);

    system("COLOR 3F");
    Beep(784,500);

    system("COLOR 4B");
    Beep(740,700);

    system("COLOR 5E");
    Beep(0,200);

    system("COLOR 6F");
    Beep(587,500);

    system("COLOR 74");
    Beep(659,500);

    system("COLOR 8E");
    Beep(587,500);

    system("COLOR 97");
    Beep(880,500);

    system("COLOR AF");
    Beep(784,700);

    system("COLOR B4");
    Beep(0,200);

    system("COLOR CE");
    Beep(1047,560);

    system("COLOR DF");
    Beep(587,500);

    system("COLOR E1");
    Beep(1175,500);

    system("COLOR F0");
    Beep(988,500);

    system("COLOR 0F");
    Beep(784,500);

    system("COLOR 1E");
    Beep(740,500);

    system("COLOR 2D");
    Beep(659,500);

    system("COLOR 3C");
    Beep(1046,500);

    system("COLOR 46");
    Beep(988,500);

    system("COLOR 5F");
    Beep(784,500);

    system("COLOR 67");
    Beep(880,500);

    system("COLOR 70");
    Beep(784,700);

    system("COLOR CE");
    Sleep(1500);
    getchar();
    return 0;
}

void birthday_note(void)
{
    printf("                    **    **  ******  ******  ******  **    **      \n");
    printf("                    **    ** ******** ******* ******* **    **     \n");
    printf("                    **    ** **    ** **   ** **   ** **    **   \n");
    printf("                    ******** ******** ******* ******* ********      \n");
    printf("                    ******** ******** ******  ******   ******        \n");
    printf("                    **    ** **    ** **      **         **\n");
    printf("                    **    ** **    ** **      **         **\n");
    printf("                    **    ** **    ** **      **         **\n");

    printf("\n");

    printf("     *******  ** *******  ******** **    **     *******   ******  **    **\n");
    printf("     ******** ** ******** ******** **    **     ******** ******** **    **\n");
    printf("     **    ** ** **    **    **    **    **     **    ** **    ** **    **\n");
    printf("     *******  ** ********    **    ********     **    ** ******** ********\n");
    printf("     *******  ** *******     **    ********     **    ** ********  ******\n");
    printf("     **    ** ** **  **      **    **    **     **    ** **    **    **\n");
    printf("     ******** ** **   **     **    **    **     ******** **    **    **\n");
    printf("     *******  ** **    **    **    **    **     *******  **    **    **\n");
}

