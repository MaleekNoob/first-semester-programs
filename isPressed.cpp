#include <unordered_map>
#include <iostream>

// Test function -- returns 0, 1, 1, 0, ...
std::uint16_t GetAsyncKeyState(int) {
    static int result = 0;
    result = (result + 1) % 4;
    return (result >> 1);
}

class KeyInput {
public:
    using key_type = int;

    enum class Transition {
        none,
        pressed,
        released,
    };

    struct PressResult {
        bool pressed;
        Transition transition;
    };

    static constexpr std::uint16_t PRESSED = (1u << 15);

    PressResult state(key_type key) {
        PressResult result;
        result.pressed = (GetAsyncKeyState(key) & PRESSED != 0);
        if (auto it = last_states_.find(key); it != last_states_.end()) {
            if (last_states_[key] == result.pressed) {
                result.transition = Transition::none;
            }
            else if (result.pressed) {
                result.transition = Transition::pressed;
            }
            else {
                result.transition = Transition::released;
            }
        }
        else {
            result.transition = Transition::none;
        }

        last_states_[key] = result.pressed;

        return result;
    };

private:
    std::unordered_map<key_type, bool> last_states_{}; 
};

int main() {
    KeyInput keys;

    for (int i = 0; i < 10; i++) {
        auto a_state = keys.state('a');
        std::cout << "a key: " << (a_state.pressed ? "pressed    " : "not pressed") << "; ";
        std::cout << "transition: ";
        switch(a_state.transition) {
            case KeyInput::Transition::none:
                std::cout << "none\n";
                break;
            case KeyInput::Transition::pressed:
                std::cout << "pressed\n";
                break;
            case KeyInput::Transition::released:
                std::cout << "released\n";
                break;
        }
    }
}