#pragma once

#include <iosfwd>

#include "Lexeme.h"
#include "StateMachine/StateMachine.h"

namespace clc::lxr
{
    class Lexer
    {
    private:
        std::wistream& stream;
        StateMachine stateMachine;

    public:
        explicit Lexer(std::wistream& s): stream{s} {}

        Lexeme GetLexeme();
        void PutLexeme(Lexeme);
    };
}