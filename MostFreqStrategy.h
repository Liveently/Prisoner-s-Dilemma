#include "Strategy.h"


constexpr char mostFreqID[] = "freq";

class MostFreqStrategy : public Strategy {
public:
    MostFreqStrategy() = default;

    ~MostFreqStrategy() override = default;

    TChoice getChoice() override;
};