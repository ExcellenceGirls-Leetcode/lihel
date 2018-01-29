/*************************************************************************
> File Name: findStrFirst.c
> Author: 
> Mail: 
> Created Time: 2018年01月29日 星期一 20时11分56秒
 ************************************************************************/

#include<stdio.h>
int strStr(char* haystack, char* needle) {
    if(*needle=='\0')
    {
        return 0;
    }
      if (strstr(haystack,needle)==NULL)//找到needle第一次在haystack中出现的位置，若未找到返回NULL
        return (-1);
    else 
        *(strstr(haystack,needle))='\0';//截取字符串到第一次出现的指针出
    return(strlen(haystack));
}
