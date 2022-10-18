/**
 * @file Furniture_Demo.hpp
 * @author Eden (edwardwang33773@gmail.com)
 * @brief Furniture_Demo
 * @version 0.1
 * @date 2022-10-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once
#include "../Creational/AbstractFactory/MultiStyleFurniture/Client.hpp"
#include "../tools/DemoName.hpp"

namespace Furniture {

void Demo() {
    Tool::show_demo_name_title("Furniture");

    auto modern_client = InitClient::initClient();
    modern_client->outputHasLegs();
    modern_client->outputSitOn();
    modern_client->outputPutOn();
    delete modern_client;

    auto victorian_client
        = InitClient::initClient(InitClient::Style::Victorian);
    victorian_client->outputHasLegs();
    victorian_client->outputSitOn();
    victorian_client->outputPutOn();
    delete victorian_client;

    Tool::show_demo_name_end("Furniture");
}

} // namespace Furniture