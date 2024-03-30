#include <iostream>
#include "../enums/UI_ENUMS.hpp"
#include "../classes/InventoryClass/InventoryClass.hpp"

int main(int argc, char** argv) {

    Inventory inventory_object;
    unsigned short choice = 0;

    do {
        PrintAppMessages::print_main_menu();
        std::cin >> choice;

        switch (choice) {
        case UI_ENUMS::ADD_ITEM_INSIDE_BOX:
            system("cls");
            inventory_object.add_item_inside_a_box();
            break;

        case UI_ENUMS::ADD_ITEM_BY_BOX_NO:
            system("cls");
            inventory_object.add_item_by_box_number();
            break;

        case UI_ENUMS::UPDATE_ITEM:
            system("cls");
            inventory_object.update_item_inside_a_box();
            break;

        case UI_ENUMS::REMOVE_ITEM:
            system("cls");
            inventory_object.remove_item_from_box();
            break;

        case UI_ENUMS::PRINT_ITEMS:
            system("cls");
            PrintAppMessages::print_inventory_data(inventory_object);
            break;

        case UI_ENUMS::EXIT_PROGRAM:
            return EXIT_SUCCESS;

        default:
            PrintAppMessages::print_error_msg();
        }

        system("pause");
        system("cls");
    } while (choice <= 6);

    std::cin.get();
    return EXIT_SUCCESS;
}