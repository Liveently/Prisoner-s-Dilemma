#include "Strategy.h"


class PlayerStrategy : public Strategy {
public:
    PlayerStrategy() = default;

    ~PlayerStrategy() override = default;

    TChoice getChoice() override;
};