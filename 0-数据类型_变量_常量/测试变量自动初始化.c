/**
 * @ breif      测试全局变量和局部变量的自动初始化
 * @ author     mculover666
 * @ date       2019/6/20
 * @ encoding   GBK/GB2312
 */

# include <stdio.h>

int i;

int main(void)
{
    int j;

    printf("全局变量i = %d.\n", i);
    printf("局部变量j = %d.\n", j);

    return 0;
}
/*
    1. Mingw-w64编译,64位Win7/10运行结果：
    ------------------------------------
    i = 0, j = 0
    ------------------------------------
    2. VC6编译,64位Win7/10运行结果：
    ------------------------------------
    i = 0, j = 0
    ------------------------------------
    3. VS2017编译,64位Win7/10运行结果：
    ------------------------------------
    error C4700：使用了未初始化的局部变量j
    ------------------------------------
*/