#include <iostream>
#define MAX(x,y) ((((x) >= (0)) && ((x) < (y))) ? (1):(0))

int main(int arg,const char** argv){
 // 1 Описать макрокоманду, проверяющую, входит ли переданное ей число в диапазон от нуля (включительно)
	// до переданного ей второго аргумента (исключительно)
	int x = 45;
	int y = 11;
    int z;
    z =	MAX(x,y);
    std::cout << z;

       // 2 Описать макрокоманду, получающую доступ к элементу двумерного массива
       // (организованного динамически) посредством разыменования указателей

 return 0;
 }
