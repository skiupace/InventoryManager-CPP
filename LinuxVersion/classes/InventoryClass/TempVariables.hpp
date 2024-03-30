#pragma once

struct stTempInventoryVariables {
    u_int16_t choice;
    u_int16_t box_id;
    std::string item_name;
    u_int32_t item_quantity;

    stTempInventoryVariables(): choice(0),
                                box_id(0), 
                                item_name("empty"), 
                                item_quantity(0) {}
} temp_variable;