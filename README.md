# 🔢 APC – Arbitrary Precision Calculator

A C-based **Arbitrary Precision Calculator (APC)** that performs arithmetic operations on very large integers exceeding the range of standard data types. The calculator uses **linked lists** to represent and process large numbers digit by digit.

---

## 📋 Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Project Structure](#project-structure)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [How It Works](#how-it-works)
- [Challenges & Learnings](#challenges--learnings)
- [Future Enhancements](#future-enhancements)
- [Author](#author)

---

## 📖 Overview

Standard C data types (`int`, `long`, `long long`) have fixed size limits and cannot store or process extremely large numbers. **APC** solves this by representing large integers as **linked lists**, where each node holds a single digit. This enables arithmetic operations — addition, subtraction, multiplication, and division — on numbers of virtually unlimited size, processed digit by digit.

---

## ✨ Features

- ➕ **Addition** — Add two arbitrarily large integers
- ➖ **Subtraction** — Subtract large integers with proper borrow handling
- ✖️ **Multiplication** — Multiply large numbers digit by digit
- ➗ **Division** — Divide large integers with accurate quotient/remainder computation
- 🧮 **Unlimited Precision** — No dependency on standard data type size limits
- 🖥️ **Command-Line Interface** — Accepts numbers and operations via CLI arguments

---

## 🛠️ Technologies Used

- **Language:** Advanced C
- **Concepts:** Linked Lists, Dynamic Memory Allocation, Data Structures & Algorithms, Modular Programming
- **Extended Scope:** Linux Kernel System Calls, Socket Programming (TCP Sockets), Network Daemons in Linux

---

## 📂 Project Structure

```
APC-Calculator/
├── src/
│   ├── main.c
│   ├── operations.c
│   ├── linkedlist.c
│   └── apc.h
├── Makefile
└── README.md
```

> Note: Update this structure to match your actual repository layout.

---

## 🚀 Getting Started

### Prerequisites
- GCC compiler installed
- Linux/Unix terminal (or WSL/Git Bash on Windows)

### Installation

```bash
# Clone the repository
git clone https://github.com/vibinmichael18-qq/APC-Calculator.git

# Navigate into the project directory
cd APC-Calculator

# Build the project using Make
make

# Run the executable
./apc
```

---

## 💻 Usage

**Perform arithmetic operations via command line:**
```bash
./apc add 123456789012345678901234567890 987654321098765432109876543210
./apc sub 987654321098765432109876543210 123456789012345678901234567890
./apc mul 123456789 987654321
./apc div 987654321098765432109876543210 123456789
```

**Available operations:**
| Command | Description |
|---------|-------------|
| `add`   | Adds two large numbers |
| `sub`   | Subtracts one large number from another |
| `mul`   | Multiplies two large numbers |
| `div`   | Divides one large number by another |

> Adjust these commands to match your actual CLI argument handling.

---

## ⚙️ How It Works

1. **Number Representation**
   - Each large number is converted into a linked list, with each node storing a single digit.
2. **Arithmetic Processing**
   - Operations are performed digit by digit, similar to manual arithmetic, handling carry (addition/multiplication) and borrow (subtraction) between nodes.
3. **Result Construction**
   - The resulting linked list is traversed and converted back into a readable number for output.

---

## 🧩 Challenges & Learnings

- **Handling Numbers Beyond Standard Data Types:** Overcame the limitation of standard C data types by representing numbers using linked lists and processing them digit by digit.
- **Carry, Borrow & Intermediate Results:** Designed separate algorithms for each arithmetic operation and extensively tested edge cases to ensure correctness.
- **Dynamic Memory Management:** Carefully handled node creation and deletion to prevent memory leaks during linked list operations.
- **Input Validation:** Implemented robust error checking for user inputs, strengthening understanding of linked lists, dynamic memory allocation, and modular programming.

---

## 🔮 Future Enhancements

- Add support for negative number handling
- Implement additional operations (modulus, exponentiation, factorial)
- Add support for decimal/floating-point precision
- Build a simple interactive REPL interface

---

## 👤 Author

**S Vibin Michael**
- 📧 Email: [vibinmichael18@gmail.com](mailto:vibinmichael18@gmail.com)
- 💼 LinkedIn: [vibin-michael](https://www.linkedin.com/in/vibin-michael-46b4b7316)
- 🐙 GitHub: [vibinmichael18-qq](https://github.com/vibinmichael18-qq)

---

<p align="center"><i>⭐ If you found this project useful, consider giving it a star!</i></p>
