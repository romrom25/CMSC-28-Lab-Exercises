#ifndef PRODUCTINVENTORY_H
#define PRODUCTINVENTORY_H

#include <iostream>
#include <string>
using namespace std;

// Base class Product
class Product {
    private:
        string name;
        string brand;
        double price;
        int quantity;
        string description;
        string category;

    public:
        // Constructors
        Product() {}

        Product(string prodName, string prodBrand, double prodPrice, int prodQuantity, string prodDescription, string prodCategory) {
            name = prodName;
            brand = prodBrand;
            price = prodPrice;
            quantity = prodQuantity;
            description = prodDescription;
            category = prodCategory;
        }

        // Setters
        void setName(string prodName) {
            name = prodName;
        }

        void setBrand(string prodBrand) {
            brand = prodBrand;
        }

        void setPrice(double prodPrice) {
            price = prodPrice;
        }

        void setQuantity(int prodQuantity) {
            quantity = prodQuantity;
        }

        void setDescription(string prodDescription) {
            description = prodDescription;
        }

        void setCategory(string prodCategory) {
            category = prodCategory;
        }

        // Getters
        string getName() {
            return name;
        }

        string getBrand() {
            return brand;
        }

        double getPrice() {
            return price;
        }

        int getQuantity() {
            return quantity;
        }

        string getDescription() {
            return description;
        }

        string getCategory() {
            return category;
        }
};

// Derived class Clothing
class Clothing : public Product {
    private:
        string size;
        string color;
        string material;

    public:
        // Constructors
        Clothing() {}

        Clothing(string prodName, string prodBrand, double prodPrice, int prodQuantity, string prodDescription, string prodSize, string prodColor, string prodMaterial)
            : Product(prodName, prodBrand, prodPrice, prodQuantity, prodDescription, "Clothing") {
            size = prodSize;
            color = prodColor;
            material = prodMaterial;
        }

        // Setters
        void setSize(string prodSize) {
            size = prodSize;
        }

        void setColor(string prodColor) {
            color = prodColor;
        }

        void setMaterial(string prodMaterial) {
            material = prodMaterial;
        }

        // Getters
        string getSize() {
            return size;
        }

        string getColor() {
            return color;
        }

        string getMaterial() {
            return material;
        }
};

// Derived class Electronics
class Electronics : public Product {
    private:
        string model;
        string warranty;
        string technicalSpecifications;

    public:
        // Constructors
        Electronics() {}

        Electronics(string prodName, string prodBrand, double prodPrice, int prodQuantity, string prodDescription, string prodModel, string prodWarranty, string prodTechnicalSpecifications)
            : Product(prodName, prodBrand, prodPrice, prodQuantity, prodDescription, "Electronics") {
            model = prodModel;
            warranty = prodWarranty;
            technicalSpecifications = prodTechnicalSpecifications;
        }

        // Setters
        void setModel(string prodModel) {
            model = prodModel;
        }

        void setWarranty(string prodWarranty) {
            warranty = prodWarranty;
        }

        void setTechnicalSpecifications(string prodTechnicalSpecifications) {
            technicalSpecifications = prodTechnicalSpecifications;
        }

        // Getters
        string getModel() {
            return model;
        }

        string getWarranty() {
            return warranty;
        }

        string getTechnicalSpecifications() {
            return technicalSpecifications;
        }
};

#endif // PRODUCTINVENTORY_H