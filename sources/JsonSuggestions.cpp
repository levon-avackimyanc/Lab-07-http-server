// Copyright 2021 Levon Avakimyanc levon.avakimyanc.01@mail.ru

#include "JsonSuggestions .hpp"

bool Compare(const json &j1, const json &j2) {
    return j1.at("cost") < j2.at("cost");
}

void Json_Suggestions::SuggestUpdate(json J) {
    std::sort(J.begin(), J.end(), Compare);
    Suggestions = J;
}

json Json_Suggestions::Suggest(const std::string &In) {
    json res;
    size_t m_pos = 0;
    for (size_t i = 0; i < Suggestions.size(); ++i) {
        if (In == Suggestions[i].at("id")) {
            json buff;
            buff["text"] = Suggestions[i].at("name");
            buff["position"] = m_pos++;
            res["suggestions"].push_back(buff);
        }
    }
    return res;
}

