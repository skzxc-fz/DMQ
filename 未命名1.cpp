#include <iostream>  
#include <bits/stdc++.h>
#include <windows.h> 
#include <unistd.h>
#include <cstdlib> // 用于rand()和srand()  
#include <ctime>   // 用于time()  
  
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
    // 初始化学生名单  
    string students[] = {

};
 
    int numStudents = sizeof(students) / sizeof(students[0]); // 计算学生人数  
  
    // 初始化随机数发生器  
    srand(static_cast<unsigned int>(time(0))); // 使用当前时间作为随机数种子  
  
    // 生成一个随机数索引，用于随机选择学生  
    int randomIndex = rand() % numStudents;  
    setFontSize(30,30);
    // 输出被点名的学生  
	cout << "点名器 Powered by C++ (GCC) C:opygm.cn 制作：张译嘉"<<endl;
    cout << "学生：" << students[randomIndex] << endl;   
    cout << "学生：" << students[randomIndex] << endl; 
    cout << "学生：" << students[randomIndex] << endl; 
    cout << "学生：" << students[randomIndex] << endl; 
    cout << "学生：" << students[randomIndex] << endl; 
    sleep(10); 
    return 0;  
}


