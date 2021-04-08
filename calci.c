#include<stdio.h>
#include "unity_internals.h"
#include"unity.h"
int sum(int num1,int num2)
{
    return num1+num2;
}
int diff(int num1,int num2)
{
    return num1-num2;
}
int mul(int num1,int num2)
{
    return num1*num2;
}
int div(int num1,int num2)
{
    if(num2==0)
    {
        return 0;
    }
    else
    return num1/num2;
}
