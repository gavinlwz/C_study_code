/**
 * @ brief      字符串的输出方法2-puts
 * @ author     mculover666
 * @ date       2019年7月5日15:39:44
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

#define MSG1    "mculover666"
#define MSG2    "hello,world"

int main(void)
{
    int count1 = 0, count2 = 0;

    count1 = puts(MSG1);
    count2 = puts(MSG2);
    printf("count1 = %d, count2 = %d.\n", count1, count2);

    system("pause");
    return 0;
}
/**
    在Mingw-w64编译后运行结果：
    ------------------------------------
    mculover666
    hello,world
    count1 = 0, count2 = 0.
    请按任意键继续. . .
    ------------------------------------
 */