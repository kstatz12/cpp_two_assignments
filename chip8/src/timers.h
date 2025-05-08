#ifndef TIMERS_H_
#define TIMERS_H_

#include <cstdint>

#define INTERVAL_MS 17
#define TIMER_INITIAL 60
#define TIMER_RESET 0

class Timers {
  private:
    uint8_t delay_timer;
    uint8_t sound_timer;

    void do_decrement(uint8_t &val) {
        if (val != TIMER_RESET) {
            val--;
        }
    }

  public:
    Timers() {
        // initial values
        this->delay_timer = TIMER_INITIAL;
    }

    void decrement_delay() { do_decrement(this->delay_timer); }

    void decrement_timer() { do_decrement(this->sound_timer); }

    void reset_delay() { this->delay_timer = TIMER_INITIAL; }
    void reset_sound() { this->sound_timer = TIMER_INITIAL; }
};

#endif // TIMERS_H_
