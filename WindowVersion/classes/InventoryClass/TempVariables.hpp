#pragma once

struct stTempInventoryVariables {
    unsigned short choice;
    unsigned short box_id;
    std::string item_name;
    unsigned short item_quantity;

    stTempInventoryVariables(): choice(0),
                                box_id(0), 
                                item_name("empty"), 
                                item_quantity(0) {}
} temp_variable;