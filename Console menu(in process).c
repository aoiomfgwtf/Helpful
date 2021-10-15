#include <stdio.h>
#include <conio.h>

void draw(char str[15]);
int menu();

int main()
{
    int answer;
        for ( ; ; )
        {
            int answer = menu();
            switch (answer)
            {
            case 0: break;
            case 1: break;
            case 2: break;
            case 3: return 0;
            }
        }
        
}
int menu()
{
    int key = 0; //Смещенние строки
    int code; // Переменная для считывания кода нажатой клавиши
    do
    {
        clrscr(); //очистка экрана перед прорисовкой
        key = (key +4)%4; //вычисление ткущей позиции курсора
        /*Если условия истинно происходит вызов функции с параметром строки которую нужно подсветить другим цветом, 
        а если ложно строка выводится на экран*/
        if (key==0) draw("Open file");
            else printf("\nOpen file");
        if (key==1) draw ("Rename file");
            else printf("\nRename file");
        if (key==2) draw("Close file");
            else printf("\nClose file");
        if (key==3) draw("Exit");
            else printf("\nExit");
        printf("\n");

        code = getch(); //Считывает код нажатой клавиши и присваивает его переменной code
        if (code==0) //Если code == 0 тогда была нажата служебная клавиша
        {
            code=getch(); //адрес служебной клавиши вернет getch()
            if (code==80) key++; //если клавиша вверх увеличиваю смещение
            if (code==72) key--; //если клавиша вниз уменьшаю смещение 
        }


    }
    while(code !=13); //если нажать enter то будет выход из цикла
    return key; // функция вернет код выбранной меню
} 

//прорисовка выбранной строки
void draw(char str[15])
{
    textcolor(3); //задает цвет
    printf("\n");
    cprintf(">%s", str); //вывод на экран с ">"
    textcolor(15); // задает цвет исходный белый
}

