// Copyright 2021 Levon Avakimyanc levon.avakimyanc.01@mail.ru


#ifndef INCLUDE_SERVER_JSONSUGGESTIONS_HPP
#define INCLUDE_SERVER_JSONSUGGESTIONS_HPP

#include <string>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

class Json_Suggestions {
public:
    Json_Suggestions() = default;

    void SuggestUpdate(json);

    json Suggest(const std::string &);

private:
    json Suggestions;
};

#endif //INCLUDE_SERVER_JSONSUGGESTIONS_HPP
