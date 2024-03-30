#include <iostream>
#include "PrintAppMessages.hpp"

void PrintAppMessages::print_error_msg() {
    std::cout << "Error! Something Went Wrong, Please Try Again...\n";
}

void PrintAppMessages::print_main_menu() {
    std::cout << "----- Inventory Manager App -----\n\n";
    std::cout << "1- Add Item Inside a Box\n";
    std::cout << "2- Add Item by Box Number\n";
    std::cout << "3- Update Item Inside a Box\n";
    std::cout << "4- Remove an Item From a Box\n";
    std::cout << "5- Print All Items Inside Boxes\n";
    std::cout << "6- Exit The Program\n\n";
    std::cout << "Enter Your Choice >> ";
}

void PrintAppMessages::print_updating_menu() {
    std::cout << "--- Updating Items Menu ---\n\n";
    std::cout << "1- Update Item Name\n";
    std::cout << "2- Update Item Quantity\n";
    std::cout << "3- Return to The Main Menu\n\n";
    std::cout << "Enter Your Choice >> ";
}

void PrintAppMessages::print_inventory_data(const Inventory& inventory_object) noexcept {
    std::cout << "--- Print All Items Inside Boxes ---\n\n";
    for (unsigned int i = 0; i < inventory_object.box_id.size(); ++i) {
        std::cout << "Item ID." << inventory_object.box_id.at(i) << '\n';
        std::cout << "Item Name: " << inventory_object.item_name.at(i) << '\n';
        std::cout << "Item Quantity: " << inventory_object.item_quantity.at(i) << '\n';
        std::cout << std::string(35, '-') << "\n\n";
    }
}