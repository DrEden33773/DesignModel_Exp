/**
 * @file Client.hpp
 * @author Eden (edwardwang33773@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-10-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once
#include "Factory.hpp"
#include <corecrt_math.h>
#include <iostream>
#include <string>

namespace Furniture {

class Client {
    Sofa*  sofa  = nullptr;
    Table* table = nullptr;

public:
    Client() = delete;
    ~Client() {
        delete sofa;
        delete table;
    }
    explicit Client(Factory* factory) {
        sofa  = factory->createSofa();
        table = factory->createTable();
    }
    void outputSitOn() {
        std::cout << sofa->getStyle();
        std::cout << sofa->getType();
        sofa->sitOn();
    }
    void outputPutOn() {
        std::cout << table->getStyle();
        std::cout << table->getType();
        table->putOn();
    }
    void outputHasLegs() {
        std::cout << sofa->getStyle();
        std::cout << sofa->getType();
        sofa->hasLegs();
        std::cout << table->getStyle();
        std::cout << table->getType();
        table->hasLegs();
    }
    std::string getStyle() {
        return sofa->getStyle();
    }
};

class InitClient {
public:
    enum class Style : unsigned short {
        Modern    = 0,
        Victorian = 1,
    };

    InitClient() = delete;
    [[nodiscard]] static Client* initClient(Style style = Style::Modern) {
        Client*  client  = nullptr;
        Factory* factory = nullptr;
        if (style == Style::Modern) {
            factory = new ModernFactory();
        } else {
            factory = new VictorianFactory();
        }
        client = new Client(factory);
        delete factory;
        return client;
    }
};

} // namespace Furniture