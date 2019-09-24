#include <stdio.h>
 
// int main()
// {
//    int  var = 20;   /* 实际变量的声明 */
//    int  *ip;        /* 指针变量的声明 */
 
//    ip = &var;  /* 在指针变量中存储 var 的地址 */
 
//    printf("Address of var variable: %p\n", &var  );
 
//    /* 在指针变量中存储的地址 */
//    printf("Address stored in ip variable: %p\n", ip );
 
//    /* 使用指针访问值 */
//    printf("Value of *ip variable: %d\n", *ip );
 
//    return 0;
   
   
// }

int main ()
{
   int  var;
   int  *ptr;
   int  **pptr;

   var = 3000;

   /* 获取 var 的地址 */
   ptr = &var;

   /* 使用运算符 & 获取 ptr 的地址 */
   pptr = &ptr;

   /* 使用 pptr 获取值 */
   printf("Value of var = %d\n", var );
   printf("Value available at *ptr = %d\n", *ptr );
   printf("Value available at **pptr = %d\n", **pptr);

   return 0;
}