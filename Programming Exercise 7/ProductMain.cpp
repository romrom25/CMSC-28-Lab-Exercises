#include <iostream>
#include <string> // for getline
#include "ProductInventory.h" // Include the ProductInventory header
using namespace std;

int main() {
    string name, brand, description, category, size, color, material, model, warranty, technicalSpecifications;
    double price;
    int quantity;

    cout << "\nCreating a Clothing object (shirt)" << endl;
    Clothing shirt;

    cout << "Input name: ";
    getline(cin, name);
    shirt.setName(name);

    cout << "Input brand: ";
    getline(cin, brand);
    shirt.setBrand(brand);

    do {
        cout << "Input price: ";
        cin >> price;
        if (price < 0) cout << "Invalid price. Please input a non-negative price." << endl;
    } while (price < 0);
    shirt.setPrice(price);

    do {
        cout << "Input quantity: ";
        cin >> quantity;
        if (quantity < 0) cout << "Invalid quantity. Please input a non-negative quantity." << endl;
    } while (quantity < 0);
    shirt.setQuantity(quantity);

    cout << "Input description: ";
    cin.ignore(); // Ignore newline character left in the buffer
    getline(cin, description);
    shirt.setDescription(description);

    cout << "Input size: ";
    getline(cin, size);
    shirt.setSize(size);

    cout << "Input color: ";
    getline(cin, color);
    shirt.setColor(color);

    cout << "Input material: ";
    getline(cin, material);
    shirt.setMaterial(material);

    cout << "\n==========================" << endl;
    cout << "Clothing Item Details:" << endl;
    cout << "Name: " << shirt.getName() << endl;
    cout << "Brand: " << shirt.getBrand() << endl;
    cout << "Price: $" << shirt.getPrice() << endl;
    cout << "Quantity: " << shirt.getQuantity() << endl;
    cout << "Description: " << shirt.getDescription() << endl;
    cout << "Category: " << shirt.getCategory() << endl;
    cout << "Size: " << shirt.getSize() << endl;
    cout << "Color: " << shirt.getColor() << endl;
    cout << "Material: " << shirt.getMaterial() << endl;
    cout << "==========================\n" << endl;

    cout << "Creating an Electronics object (laptop)" << endl;
    Electronics laptop;

    cout << "Input name: ";
    getline(cin, name);
    laptop.setName(name);

    cout << "Input brand: ";
    getline(cin, brand);
    laptop.setBrand(brand);

    do {
        cout << "Input price: ";
        cin >> price;
        if (price < 0) cout << "Invalid price. Please input a non-negative price." << endl;
    } while (price < 0);
    laptop.setPrice(price);

    do {
        cout << "Input quantity: ";
        cin >> quantity;
        if (quantity < 0) cout << "Invalid quantity. Please input a non-negative quantity." << endl;
    } while (quantity < 0);
    laptop.setQuantity(quantity);

    cout << "Input description: ";
    cin.ignore(); // Ignore newline character left in the buffer
    getline(cin, description);
    laptop.setDescription(description);

    cout << "Input model: ";
    getline(cin, model);
    laptop.setModel(model);

    cout << "Input warranty: ";
    getline(cin, warranty);
    laptop.setWarranty(warranty);

    cout << "Input technical specifications: ";
    getline(cin, technicalSpecifications);
    laptop.setTechnicalSpecifications(technicalSpecifications);

    cout << "\n==========================" << endl;
    cout << "Electronics Item Details:" << endl;
    cout << "Name: " << laptop.getName() << endl;
    cout << "Brand: " << laptop.getBrand() << endl;
    cout << "Price: $" << laptop.getPrice() << endl;
    cout << "Quantity: " << laptop.getQuantity() << endl;
    cout << "Description: " << laptop.getDescription() << endl;
    cout << "Category: " << laptop.getCategory() << endl;
    cout << "Model: " << laptop.getModel() << endl;
    cout << "Warranty: " << laptop.getWarranty() << endl;
    cout << "Technical Specifications: " << laptop.getTechnicalSpecifications() << endl;
    cout << "==========================\n" << endl;

    return 0;
}
