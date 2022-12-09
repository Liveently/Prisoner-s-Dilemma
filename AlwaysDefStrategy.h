#include "Strategy.h"

constexpr char alwaysDefID[] = "def";

class AlwaysDefStrategy : public Strategy{
public:
    AlwaysDefStrategy() = default;

    ~AlwaysDefStrategy() override = default;

    TChoice getChoice() override;
};