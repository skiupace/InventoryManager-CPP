#include <iostream>
#include "TempVariables.hpp"
#include "InventoryClass.hpp"
#include "../../enums/UPDATING_ENUMS.hpp"

inline unsigned short Inventory::inventory_capacity() {
    return box_id.size();
}

inline bool Inventory::is_inventory_empty() {
    return box_id.empty();
}

void Inventory::add_item_inside_a_box() {
    std::cout << "--- Add Item Inside a Box ---\n\n";
    std::cout << "Enter Item Name: ";
    std::getline(std::cin >> std::ws, temp_variable.item_name);

    std::cout << "Enter Item Quantity: ";
    std::cin >> temp_variable.item_quantity;

    box_id.push_back(++temp_variable.box_id);
    item_name.push_back(temp_variable.item_name);
    item_quantity.push_back(temp_variable.item_quantity);
}

void Inventory::add_item_by_box_number() {
    std::cout << "--- Add Item by Box Number ---\n\n";
    std::cout << "Enter The Box Number That You Want to Add an Item Inside it: ";
    std::cin >> temp_variable.box_id;

    if (box_id.size() >= temp_variable.box_id) {
        if (item_name.at(temp_variable.box_id - 1) == "empty") {
            std::cout << "\nEnter Item Name: ";
            std::getline(std::cin >> std::ws, temp_variable.item_name);

            std::cout << "Enter Item Quantity: ";
            std::cin >> temp_variable.item_quantity;

            item_name.at(temp_variable.box_id - 1) = temp_variable.item_name;
            item_quantity.at(temp_variable.box_id - 1) = temp_variable.item_quantity;
        } else
            std::cout << "Sorry But, The Box Isn't Empty...\n";
    } else
        PrintAppMessages::print_error_msg();
}

void Inventory::update_item_inside_a_box() {
    std::cout << "--- Update Item Inside a Box ---\n\n";
    std::cout << "Enter The Box ID: ";
    std::cin >> temp_variable.box_id;

    if (box_id.size() >= temp_variable.box_id) {
        if (item_name.at(temp_variable.box_id - 1) != "empty") {
            do {
                PrintAppMessages::print_updating_menu();
                std::cin >> temp_variable.choice;

                switch (temp_variable.choice) {
                    case UPDATING_ENUMS::UPDATE_ITEM_NAME:
                        system("cls");
                        std::cout << "Enter The Updated Item Name: ";
                        std::getline(std::cin >> std::ws, temp_variable.item_name);
                        item_name.at(temp_variable.box_id - 1) = temp_variable.item_name;
                        break;
                    
                    case UPDATING_ENUMS::UPDATE_ITEM_QUANTITY:
                        system("cls");
                        std::cout << "Enter The Updated Item Quantity: ";
                        std::cin >> temp_variable.item_quantity;
                        item_quantity.at(temp_variable.box_id - 1) = temp_variable.item_quantity;
                        break;
                    
                    case UPDATING_ENUMS::RETURN_TO_MAIN_MENU:
                        return;
                    
                    default:
                        PrintAppMessages::print_error_msg();
                } std::cout << "The Item Info Has Been Updated ...\n";

                system("pause");
                system("cls");
            } while (temp_variable.choice <= 3);
        } else
            std::cout << "Sorry But, The Box Is Empty...\n";
    } else
        PrintAppMessages::print_error_msg();
}

void Inventory::remove_item_from_box() {
    std::cout << "--- Remove Item From Box ---\n\n";
    std::cout << "Enter The Box ID to Remove Item Inside of It: ";
    std::cin >> temp_variable.box_id;

    item_name.at(temp_variable.box_id - 1) = "empty";
    item_quantity.at(temp_variable.box_id - 1) = 0;
    std::cout << "The Box Has Been Freed ...\n";
}