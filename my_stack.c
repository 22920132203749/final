/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */









include "include/my_stack.h"
int  stack[100];
int top=0;

void stack_push(int x)
{
if(!stack_is_full())
stack[top++]=x;
}
int stack_pop()
{
if(!stack_is_empty())
return stack[--top];
}

int stack_capacity()
{
return 100;
}

int stack_size()
{
return top;
}

int stack_is_empty()
{
if (top==0) return 1;
else return 0;
}
int stack_is_full();
{
if(top>=99) return 1;
}






















































































































