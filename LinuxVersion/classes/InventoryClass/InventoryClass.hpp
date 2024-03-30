#pragma once

#include <vector>
#include <string>
#include "../PrintClass/PrintAppMessages.hpp"

class Inventory {
public:
    void add_item_inside_a_box();
    void add_item_by_box_number();
    void update_item_inside_a_box();
    void remove_item_from_box();

    // *Methods for looking into inventory details:
    inline u_int16_t inventory_capacity();
    inline bool is_inventory_empty();

private:
    friend class PrintAppMessages;

private:
    std::vector<u_int16_t> box_id;
    std::vector<std::string> item_name;
    std::vector<u_int16_t> item_quantity;
};