#include <stddef.h> /* for NULL */
#include <stdlib.h>
#include <string.h>
#include "lex-state-stack.h"

t_lex_state_stack lex_state_stack;

void lex_state_init_stack(void) {
    int i = 0;
    lex_state_stack.size = 0;
    for ( ; i < LEX_STATE_STACK_SIZE; i++ ) {
        lex_state_stack.arr[i] = NULL;
    }
}

int lex_state_empty_stack(void) {
    return lex_state_stack.size == 0;
}

int lex_state_full_stack(void) {
    return lex_state_stack.size == LEX_STATE_STACK_SIZE;
}

t_lex_state_item *lex_state_top_stack(void) {
    if( lex_state_empty_stack() ) {
        return NULL;
    }
    else {
        return lex_state_stack.arr[lex_state_stack.size - 1];
    }
}

void lex_state_push_stack(int state, char *desc) {
    char *str;
    t_lex_state_item *item;

    if(lex_state_full_stack()){
        return;
    }

    item = (t_lex_state_item *)malloc(sizeof(t_lex_state_item));
    if(item){
        item -> state = state;
        str = (char *)malloc(strlen(desc) + 1);
        strcpy(str, desc);
        item -> desc = str;
    }

    lex_state_stack.arr[lex_state_stack.size++] = item;
}

// void lex_state_show_stack(void);

t_lex_state_item *lex_state_pop_stack(void) {
    if(lex_state_empty_stack()){
        return NULL;
    }
    return lex_state_stack.arr[--lex_state_stack.size];
}

t_lex_state_item *lex_state_shift_stack(void) {
    t_lex_state_item *item;
    int i;

    if(lex_state_empty_stack()){
        return NULL;
    }
    item = lex_state_stack.arr[0];

    for(i=0; i<lex_state_stack.size - 1; i++){
        lex_state_stack.arr[i] = lex_state_stack.arr[i+1];
    }
    lex_state_stack.size --;

    return item;
}
