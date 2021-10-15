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
    int key = 0; //��������� ������
    int code; // ���������� ��� ���������� ���� ������� �������
    do
    {
        clrscr(); //������� ������ ����� �����������
        key = (key +4)%4; //���������� ������ ������� �������
        /*���� ������� ������� ���������� ����� ������� � ���������� ������ ������� ����� ���������� ������ ������, 
        � ���� ����� ������ ��������� �� �����*/
        if (key==0) draw("Open file");
            else printf("\nOpen file");
        if (key==1) draw ("Rename file");
            else printf("\nRename file");
        if (key==2) draw("Close file");
            else printf("\nClose file");
        if (key==3) draw("Exit");
            else printf("\nExit");
        printf("\n");

        code = getch(); //��������� ��� ������� ������� � ����������� ��� ���������� code
        if (code==0) //���� code == 0 ����� ���� ������ ��������� �������
        {
            code=getch(); //����� ��������� ������� ������ getch()
            if (code==80) key++; //���� ������� ����� ���������� ��������
            if (code==72) key--; //���� ������� ���� �������� �������� 
        }


    }
    while(code !=13); //���� ������ enter �� ����� ����� �� �����
    return key; // ������� ������ ��� ��������� ����
} 

//���������� ��������� ������
void draw(char str[15])
{
    textcolor(3); //������ ����
    printf("\n");
    cprintf(">%s", str); //����� �� ����� � ">"
    textcolor(15); // ������ ���� �������� �����
}

