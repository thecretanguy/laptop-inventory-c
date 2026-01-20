# Laptop Inventory Management System 💻

A robust Command Line Interface (CLI) application designed for computer retail stores to manage hardware stock efficiently.

## 📖 Overview
This software provides a backend solution for tracking laptop inventory. It allows store managers to digitize their stock records, input product specifications, and perform real-time price queries to locate specific products instantly.

## 🚀 Key Features
* **Inventory Digitization:** Stores detailed specifications including Brand, Product Code, Model, and Pricing.
* **Batch Processing:** Supports bulk data entry for rapid stock updates.
* **Precision Search:** Implements a search engine to retrieve product details based on specific price points.
* **Memory Efficiency:** Utilizes direct memory pointers (`struct *`) for data retrieval, ensuring optimal performance and low memory footprint.

## 🛠️ Technical Stack
* **Language:** C (C99 Standard)
* **Data Structure:** Custom `struct` implementation for record encapsulation.
* **Architecture:** Procedural design with pointer arithmetic.

## 📦 How to Build & Run

### Prerequisites
* GCC Compiler (or any standard C compiler)

### Installation

1.  **Compile the source code**
    ```bash
    gcc laptop.c -o inventory_manager
    ```

2.  **Run the application**
    ```bash
    ./inventory_manager
    ```

---
**Lambros Marazakis**
