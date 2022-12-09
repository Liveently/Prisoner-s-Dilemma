#include "Strategy.h"

TChoicesList Strategy::getHistory() const{
    return history_;
}

TScoreMap Strategy::getScoreMap() const {
    return scoreMap_;
}

size_t Strategy::getOrderNumber() const{
    return orderNumber_;
}

TConfigs Strategy::getConfigs() const {
    return configsFileName_;
}