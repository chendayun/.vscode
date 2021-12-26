// #ifndef _REGEXTONFA_H_
// #define _REGEXPTONFA_H_
// #include <stdio.h>

// typedef struct _NFAState
// {
//     // 状态间转换的标识，用'$ '表示'ε-转换'
//     char Transform;
//     // 指向下一个状态
//     struct _NFAState *Next1;
//     // 指向下一个状态
//     struct _NFAState *Next2;
//     // 状态名称
//     int name;
//     // 接受状态 1 或  0
//     int AcceptFlag;
// } NFAState;

// typedef struct _NFAFragment
// {
//     // 开始状态
//     NFAState *StartState;
//     // 接受状态
//     NFAState *AcceptState;
// } NFAFragment;

// #endif
