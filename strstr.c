/*************************************************************************
> File Name: strstr.c
> Author: 
> Mail: 
> Created Time: 2018年01月29日 星期一 20时25分42秒
 ************************************************************************/

#include<stdio.h>  
#include<string.h>  
#include<stdlib.h>    
char *mystrstr(char *s1,char *s2);  
int main(void)  
{  
    char *s="Golden Global View";  
    char *l="ol";   //char *l=""  
    char *p;  
    //system("cls"); 
    p=mystrstr(s,l);  
    if (p!=NULL)  
    {  
        printf("%s\n",p);  
    }  
    else  
    {  
        printf("Not Found!\n");  
    }  
    //getch();  
    return 0;  
}    
char *mystrstr(char *s1,char *s2) //找出s2在s1中第一次出现的位置 
{  
    int n=0;  
    if (*s2)                      //两种情况考虑  
    {  
        while(*s1)                 
        {  
            for (n=0;*(s1+n)==*(s2+n);n++)  
            {  
                if (!*(s2+n+1))            //查找s2的下一个字符是否为'\0'  
                {  
                    return (char*)s1;  
                }  
            }  
            s1++;  
        }  
        return NULL;  
    }  
    else  
    {  
        return (char*)s1;  
    }  
}  
