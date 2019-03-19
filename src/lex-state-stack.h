#define LEX_STATE_STACK_SIZE 20

typedef struct {
    int state;
    char *desc;
} t_lex_state_item;

typedef struct { 
    int size;
    t_lex_state_item *arr[LEX_STATE_STACK_SIZE];
} t_lex_state_stack;

void lex_state_init_stack(void);
t_lex_state_item *lex_state_top_stack(void);
int lex_state_empty_stack(void);
int lex_state_full_stack(void);

void lex_state_push_stack(int state, char *desc);
// void lex_state_show_stack(void);
t_lex_state_item *lex_state_pop_stack(void);
t_lex_state_item *lex_state_shift_stack(void);




