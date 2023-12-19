#ifndef joshua_h
#define joshua_h
typedef enum 
{
false,
true
}bool;
typedef struct stackElement
{
 int value;
 struct stackElement *next;
 
} stackElement,*stack;
stack new_stack(void);
bool is_empty_stack(stack st);
stack push_stack(stack st,int x);
#endif