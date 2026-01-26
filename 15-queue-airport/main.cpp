#include <iostream>
#include <queue>

class Ticket {
private:
    int group;
    int priority;

    inline static int nextPriority = 1;
public:
    Ticket (int g) : group(g) {
        priority = nextPriority;
        ++nextPriority;
    }

    bool operator<(const Ticket &t) const {
        if (t.group != group) {
            return t.group > group;
        }
        return t.priority < priority;
    }

    void print() const {
        std::cout << group << " | " << priority << "\n";
    }
};

int main() {
    std::priority_queue<Ticket> queue;

    return 0;
}