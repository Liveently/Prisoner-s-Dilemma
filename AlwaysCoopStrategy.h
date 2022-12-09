#include "Strategy.h"

class AlwaysCoopStrategy : public Strategy {
public:
    AlwaysCoopStrategy() = default;

    ~AlwaysCoopStrategy() override = default;

    TChoice getChoice() override;
};