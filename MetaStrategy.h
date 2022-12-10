#include "Strategy.h"

constexpr char metaID[] = "meta";

class MetaStrategy : public Strategy {
public:
    MetaStrategy() = default;

    ~MetaStrategy() override = default;

    TChoice getChoice() override;

    void setConfigsFileName(const std::string &configsFileName) override;

private:
    size_t strategiesCounter_ = 0;
    std::vector<std::string> strategiesNames_;
};
