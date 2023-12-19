#include <stdio.h>
#include <stdlib.h>
#include "joshua.h"
stack new_stack(void){
    return NULL;
}
/*..............................*/
bool is_empty_stack(stack st){
    if (st ==NULL)
      return true;
      return false;
     
}
stack push_stack(stack st,int x){
    stackElement *element ;
    if(is_empty_stack(st))
    return new_stack();
    element = st-> next;
    free(st);
    return clear_stack(element);
}