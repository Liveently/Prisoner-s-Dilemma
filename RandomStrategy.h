#include "Strategy.h"

constexpr char randomID[] = "random";

class RandomStrategy : public Strategy {
public:
    RandomStrategy() = default;;

    ~RandomStrategy() override = default;

    TChoice getChoice() override;
};