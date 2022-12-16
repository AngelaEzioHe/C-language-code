# C-language-code
刚学C语言时的菜鸡代码

2022.12.16

第一次因为定义数组长度不能是变量而卡住，搜了些资料：

```c	
//int a[N];  不用这种形式
int* a = (int*)malloc(sizeof(int)* N);  //换成这种申请动态变量的方法
