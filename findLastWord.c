/*************************************************************************
> File Name: findLastWord.c
> Author: 
> Mail: 
> Created Time: 2018年01月23日 星期二 21时44分34秒
找出字符串中最后一个单词并返回其长度
************************************************************************/

#include<stdio.h>
int lengthOfLastWord(char* s) {
    int result = 0;
    int last = 0;
    while (*s != '\0') {
        if (*s != ' ') {
            result++;
        } else if (result) {
            last = result;
            result = 0;
        }
        s++;
    }
    return result ? result : last;
}
