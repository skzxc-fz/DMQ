#include <iostream>  
#include <bits/stdc++.h>
#include <windows.h> 
#include <unistd.h>
#include <cstdlib> // ����rand()��srand()  
#include <ctime>   // ����time()  
  
using namespace std;  
inline void setFontSize(int a, int b) 

{

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

    PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx = new CONSOLE_FONT_INFOEX();

    lpConsoleCurrentFontEx->cbSize = sizeof(CONSOLE_FONT_INFOEX);

    GetCurrentConsoleFontEx(hStdOut, 0, lpConsoleCurrentFontEx);

    lpConsoleCurrentFontEx->dwFontSize.X = a;

    lpConsoleCurrentFontEx->dwFontSize.Y = b;

    SetCurrentConsoleFontEx(hStdOut, 0, lpConsoleCurrentFontEx);

}
  
int main() {  
    // ��ʼ��ѧ������  
    string students[] = {
    "����ͩ", "������", "������", "�⳿��", "��ط��", "����", "������", "��Զ��",
    "�¼��", "¬�ݺ�", "������", "���Ž�", "��˼�", "�����", "ȫ���", "�����",
    "��˼Դ", "����", "����᰽�", "������", "����ī��", "������", "���", "��׿��",
    "���ü�", "κ����", "������", "��˼��", "�����ޱ", "���ں�", "���곽", "�ƿ���",
    "�����", "���ӽ�", "������", "����", "Ԭ����", "�����", "����Ȩ", "Ԭ�",
    "�����", "�����", "ë����", "��ǧ��", "������", "������", "��һ��", "�����",
    "����Ϫ", "��˼�", "������", "������"
};
 
    int numStudents = sizeof(students) / sizeof(students[0]); // ����ѧ������  
  
    // ��ʼ�������������  
    srand(static_cast<unsigned int>(time(0))); // ʹ�õ�ǰʱ����Ϊ���������  
  
    // ����һ��������������������ѡ��ѧ��  
    int randomIndex = rand() % numStudents;  
    setFontSize(30,30);
    // �����������ѧ��  
	cout << "������ Powered by C++ (GCC) C:opygm.cn �����������"<<endl;
    cout << "ѧ����" << students[randomIndex] << endl;   
    cout << "ѧ����" << students[randomIndex] << endl; 
    cout << "ѧ����" << students[randomIndex] << endl; 
    cout << "ѧ����" << students[randomIndex] << endl; 
    cout << "ѧ����" << students[randomIndex] << endl; 
    sleep(10); 
    return 0;  
}


