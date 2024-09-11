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
    "赵乐桐", "王紫伊", "张艺曦", "吴晨浩", "李胤程", "彭俊兮", "王海灵", "王远洋",
    "陈嘉浔", "卢逸航", "黎铭浩", "何昱杰", "陈思睿", "唐梓皓", "全杰睿", "黄瀚淋",
    "朱思源", "彭祺", "阿绒岚杰", "陈昱融", "王梓墨轩", "陈咨闻", "田淼", "李卓轩",
    "宋悦嘉", "魏成羽", "李少妍", "周思含", "车罗睿薇", "唐于涵", "张雨辰", "黄俊龙",
    "张译嘉", "房子杰", "高明宇", "罗焱", "袁俊雄", "赖当灏", "王紫权", "袁睿辰",
    "周瑜清", "吴浩宇", "毛浩宇", "孙千雅", "曾奕晴", "高琪淋", "陈一嘉", "唐翊心",
    "卿宇溪", "尹思娴", "刘泓语", "林三力"
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


