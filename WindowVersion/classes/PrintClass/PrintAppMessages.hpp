#pragma once

#include <memory>
#include "../InventoryClass/InventoryClass.hpp"

class PrintAppMessages {
public:
    static void print_error_msg();
    static void print_main_menu();
    static void print_updating_menu();
    static void print_inventory_data(const class Inventory&) noexcept;
};