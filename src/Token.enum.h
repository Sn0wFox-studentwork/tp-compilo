#ifndef TP_COMPILO_TOKEN_ENUM_H
#define TP_COMPILO_TOKEN_ENUM_H

/**
 * The tokens returned by the lexical analyzer.
 */
enum Token {
    UNKNOWN = -1,   // Unsupported character
    PLUS,           // +
    MULT,           // *
    OPEN,           // (
    CLOSE,          // )
    VAL,            // [0-9]+
    EXPR,           // An expression
    EOL             // End of line ( $ ; \0)
};

#endif //TP_COMPILO_TOKEN_ENUM_H
