#ifndef PARSER_H_
#define PARSER_H_

#include "opcode.h"

enum Instruction {
  CLR,
  JMP,
  LD_VX_KK,
  ADD_VX_KK,
  LD_I,
  DRAW
};

struct Parser
{
    Instruction parse(Opcode opcode)
    {
        switch(opcode.high())
        {
            case 0x00:
                switch(opcode.byte())
                {
                    //00E0
                    case 0xE0: return Instruction::CLR;
                }
            case 0x01: return Instruction::JMP;
            case 0x06: return Instruction::LD_VX_KK;
            case 0x0A: return Instruction::LD_I;
            case 0x07: return Instruction::ADD_VX_KK;
            case 0x0D: return Instruction::DRAW;
        }
    }
};

#endif // PARSER_H_
