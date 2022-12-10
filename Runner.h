#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "Strategy.h"
#include "RunnerTypesAndConstants.h"



class Runner {
public:
    Runner(TMode mode, size_t stepsCount, const std::string &configsFileName,
           const std::string &scoreMapFileName, std::vector<std::string> &names);

    Runner() = default;

    Runner(const Runner &) = delete;

    void operator=(const Runner &) = delete;

    bool runGame(std::ostream &ostream = std::cout, std::istream &istream = std::cin);

    TStatus getStatus();


    bool setScoreMapFromFile(const std::string &fileName);


    static TScoreMap getDefaultScoreMap();


private:
    TStatus status_ = TStatus::OK;
    bool printing_ = true;
    TMode gameMode_ = TMode::DETAILED;
    std::vector<std::string> strategyNames_;
    std::map<std::string, std::unique_ptr<Strategy>> strategies_;
    std::map<std::string, size_t> gameScores_;
    size_t stepsCount_ = 10;
    std::string configsFileName_;
    TChoicesList history_;
    TScoreMap scoreMap_ = getDefaultScoreMap();

    bool initStrategies();

    bool runTournament(std::ostream &stream);

    bool runDefaultGame(std::ostream &ostream, std::istream &istream = std::cin);

    bool checkStrategiesCount();

};