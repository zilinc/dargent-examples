// This file is generated by Cogent

#ifndef EX1_DARGENTISA_H__
#define EX1_DARGENTISA_H__

#include <cogent-defns.h>

enum {
    LET_TRUE = 1,
} ;
enum {
    LETBANG_TRUE = 1,
} ;
enum tag_t {
    TAG_ENUM_Con0,
    TAG_ENUM_Con1,
} ;
typedef enum tag_t tag_t;
enum untyped_func_enum {
    FUN_ENUM_main,
} ;
typedef enum untyped_func_enum untyped_func_enum;
typedef untyped_func_enum t98;
#define FUN_DISP_MACRO_dispatch_t98(a1, a2, a3)\
{\
    {\
        a1 = main(a3);\
    }\
}
typedef struct t1 t1;
typedef struct t2 t2;
typedef struct t3 t3;
typedef struct t4 t4;
typedef struct t5 t5;
typedef struct t6 t6;
typedef struct t7 t7;
typedef struct t8 t8;
typedef struct t9 t9;
struct t1 {
    tag_t tag;
    bool_t Con0;
    bool_t Con1;
} ;
struct t2 {
    bool_t field0;
} ;
struct t3 {
    bool_t field0;
    bool_t field1;
    bool_t field2;
} ;
struct t4 {
    t2 field0;
    t3 field1;
    bool_t field2;
} ;
struct t5 {
    t2 field0;
} ;
struct t6 {
    t5 field0;
    bool_t field1;
} ;
struct t7 {
    t6 field0;
    bool_t field1;
} ;
struct t8 {
    t4 field0;
    t7 field1;
    bool_t field2;
    bool_t field3;
    t2 field4;
    bool_t field5;
    bool_t field6;
} ;
struct t9 {
    unsigned int data[1U];
} ;
static inline t9 *main(t9 *);
static inline t9 *dispatch_t98(untyped_func_enum a2, t9 *a3)
{
    return main(a3);
}
typedef t9 Ex;
typedef t9 *main_arg;
typedef t9 *main_ret;
#endif


