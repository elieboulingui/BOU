#include <stdio.h>
#include <stdlib.h>
#include "joshua.h"
int main (){
    stack sta = new_stack();
    if (is_empty_stack(sta))
    printf("la pile est vide\n");
    else
    printf("la pile a des elements");
     
     sta = clear_stack(sta);
       if (is_empty_stack(sta))
    printf("la pile est vide\n");
    else
    printf("la pile a des elements");
     
    return 0;
}
