#include <stdio.h>
#include <string.h>
#include "test.h"
char a[]="abcfeg\n";
typedef unsigned char BYTE;
typedef int MyInt;
//结构体
struct 
{
  int head;
  char title;
}pmd_head;
struct Books
{
    char title;
};
int main(int argc,char **argv)
{
    void structInit();
    printf("helloworld androids7\n");
    test();
    abcd();
    printf(a);
    // pmd_head.title="结构体变量赋值\n";
    pmd_head.head=8848;
    // printf(pmd_head.head);
    return 0;
}
void structInit()
{   
    // 结构体初始化语法不清楚
    struct Books Book1;
}
void test()
{
    //乱码 utf-8
    printf("test在h声明 在c实现 \n");
}
