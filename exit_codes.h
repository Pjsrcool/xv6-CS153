//
// Created by justin on 4/11/22.
//

#ifndef XV6_EXIT_CODES_H
#define XV6_EXIT_CODES_H

enum exit_codes {
    SUCCESS,                // 0
    CAT_WRITE,
    CAT_READ,
    CAT_CANNOT_OPEN,
    FORK_PID_0,
    FORK_STOPPED_EARLY,     // 5
    FORK_TOO_MANY,
    GREP_NO_FILE,
    GREP_CANNOT_OPEN,
    INIT_FORK_FAILED,
    INIT_EXEC_FAILED,       // 10
    KILL_NO_PID,
    LN_WRONG_PARAM,
    LN_FAILED,
    MKDIR_NO_PARAM,
    RM_NO_PARAM,            // 15
    SH_EXEC,
    SH_REDIR,
    SH_PANIC,
    TEST_FAILED,
    WC_READ_ERROR,          // 20
    WC_FAIL_OPEN_FILE,
    TRAP_SYS_CALL,
    TRAP_FORCE_EXIT,
};


#endif //XV6_EXIT_CODES_H
