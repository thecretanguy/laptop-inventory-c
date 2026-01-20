# Laptop Inventory Management System 💻

[![Language](https://img.shields.io/badge/language-C99-blue.svg)](https://en.wikipedia.org/wiki/C99)
[![Context](https://img.shields.io/badge/Context-Exam%20Solution-red.svg)]()
[![University](https://img.shields.io/badge/University-University%20of%20the%20Peloponnese-orange.svg)]()

A C implementation demonstrating structure manipulation and pointer arithmetic, developed as a solution to a final exam problem.

**[🇺🇸 English Description](#-english-description) | [🇬🇷 Ελληνική Περιγραφή](#-ελληνική-περιγραφή)**

---

## 🇺🇸 English Description

### 🎓 Academic Context
This repository contains a solution to a **final exam question** for the course **"Programming II"** at the **Department of Digital Systems**, **University of the Peloponnese**.

### 📋 Problem Statement
The exam required the development of a C program to simulate a computer store's backend inventory. The focus was on demonstrating understanding of **structs** and **memory management via pointers**.

**Requirements:**
1.  Define a `Laptop` structure (Brand, Code, Model, Price).
2.  Implement a function that accepts an array of structs and returns a **pointer** to a specific laptop based on price search (Linear Search).
3.  Implement a `main` function to populate 20 records and perform the search operation.

### 🛠️ Technical Implementation
* **File:** `laptop.c`
* **Standard:** C99
* **Key Concepts:**
    * `typedef struct` for custom data types.
    * Passing arrays by reference.
    * Returning pointers from functions (`Laptop*`).
    * Input buffer handling.

### 🚀 How to Run

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/YOUR_USERNAME/REPO_NAME.git](https://github.com/YOUR_USERNAME/REPO_NAME.git)
    ```

2.  **Compile the source code:**
    ```bash
    gcc laptop.c -o laptop
    ```

3.  **Run the executable:**
    ```bash
    ./laptop
    ```
    *(On Windows use `laptop.exe`)*

---

## 🇬🇷 Ελληνική Περιγραφή

### 🎓 Πλαίσιο Υλοποίησης
Ο παρών κώδικας αποτελεί επίλυση **θέματος εξεταστικής** του μαθήματος **"Προγραμματισμός ΙΙ"** του **Τμήματος Ψηφιακών Συστημάτων** στο **Πανεπιστήμιο Πελοποννήσου**.

### 📋 Περιγραφή Θέματος
Ζητήθηκε η συγγραφή προγράμματος C για τη διαχείριση αποθήκης φορητών υπολογιστών, με έμφαση στη χρήση **Δομών (Structs)** και **Δεικτών (Pointers)**.

**Ζητούμενα:**
1.  Ορισμός δομής `Laptop` με πεδία: Μάρκα, Κωδικός, Μοντέλο, Τιμή.
2.  Δημιουργία συνάρτησης που δέχεται πίνακα δομών και τιμή προς αναζήτηση.
    * Η συνάρτηση πρέπει να επιστρέφει **δείκτη (pointer)** στη δομή που βρέθηκε (όχι αντίγραφο) ή `NULL`.
3.  Συγγραφή `main` για την εισαγωγή 20 εγγραφών και την κλήση της συνάρτησης αναζήτησης.

### 🛠️ Τεχνικά Χαρακτηριστικά
* **Αρχείο:** `laptop.c`
* **Πρότυπο:** C99
* **Έννοιες:**
    * Διαχείριση `struct` και `typedef`.
    * Πέρασμα πινάκων σε συναρτήσεις.
    * Επιστροφή διευθύνσεων μνήμης (Pointers) για βελτιστοποίηση.
    * Έλεγχος ροής και βρόχοι επανάληψης.

### 🚀 Οδηγίες Εκτέλεσης

1.  **Μεταγλώττιση (Compile):**
    ```bash
    gcc laptop.c -o laptop
    ```

2.  **Εκτέλεση:**
    ```bash
    ./laptop
    ```
    *(Σε Windows χρησιμοποιήστε `laptop.exe`)*

---

### 👤 Author
**[Your Name]**
Student, Department of Digital Systems
University of the Peloponnese
