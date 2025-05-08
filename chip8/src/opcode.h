#ifndef OPCODE_H_
#define OPCODE_H_

#include <cstdint>
struct Opcode
{
    uint16_t input;

    Opcode(uint16_t opcode): input(opcode) {}

    [[nodiscard]] uint8_t second_nibble() const { return (input & 0x0F00) >> 8; }
    [[nodiscard]] uint8_t third_nibble() const { return (input & 0x00F0) >> 4; }
    [[nodiscard]] uint16_t high() const { return input >> 12; }
    [[nodiscard]] uint16_t low() const { return input & 0x000F; }
    [[nodiscard]] uint8_t byte() const { return input & 0x00FF; }
    [[nodiscard]] uint16_t address() const { return input & 0x0FFF;}
}

#endif // OPCODE_H_
