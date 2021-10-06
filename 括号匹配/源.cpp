#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using  namespace  std;
#include<stdlib.h>
#include<string.h>
#define    Maxsize    100
#  define  OK  1
#  define  OVERFLOW  -2
#  define  ERROR  0

typedef    int    SElemType;
typedef  struct
{
    SElemType* base;  //Õ»µ×Ö¸Õë        
    SElemType* top;  //Õ»¶¥Ö¸Õë    
    int    stacksize;  //Õ»ÈÝÁ¿
}  SqStack;
int  InitStack(SqStack& S)
{
    S.base = (SElemType*)malloc(sizeof(SElemType) * Maxsize);
    S.top = S.base;
    S.stacksize = Maxsize;
    return OK;
}
int  StackEmpty(SqStack  S)
{
    if (S.top == S.base)      return  OK;
    else      return  ERROR;
}

int  Push(SqStack& S, SElemType  e)
{  //ÈëÕ»
    *S.top++ = e;
    return OK;
}

int  Pop(SqStack& S, SElemType& e)
{//³öÕ»
    e = *--S.top;
    return 1;
}

int    GetTop(SqStack  S, SElemType& e)
{

    return 0;
}  //GetTop  ¶ÁÕ»¶¥


int  matching(char* exp)
{//À¨ºÅÆ¥Åä³ÌÐò
    SqStack S;
    InitStack(S);
    int i = 0;
    int e = 0,flag=0;
    while (exp[i] != '\0') {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{') {
            Push(S, exp[i]);
        }
        if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}') {
            if (Pop(S, e))
                flag = 0;
            if (exp[i] == ')' && e == '(') {
                flag = 1;
            }
            if (exp[i] == ']' && e == '[') {
                flag = 1;
            }if (exp[i] == '}' && e == '{') {
                flag = 1;
            }
            
        }
        i++;
    }
    if (flag)
        return OK;
    else
        return ERROR;
}

int  main()
{
    char  str[100];
    cin >> str;
    if (matching(str) == OK)
        cout << "OK\n";
    else  cout << "ERROR\n";
    return  1;
}
