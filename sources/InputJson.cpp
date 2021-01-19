// Copyright 2021 Levon Avakimyanc levon.avakimyanc.01@mail.ru


#include "InputJson.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <exception>

Input_Json::Input_Json(const std::string &filename) { Filename = filename; }

json Input_Json::GetJson() const { return J; }

void Input_Json::Upload() {
    try {
        std::ifstream fin(Filename);
        fin >> J;
    }
    catch (const std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
}