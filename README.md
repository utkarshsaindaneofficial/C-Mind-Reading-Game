# C-Mind-Reading-Game
fun console-based mind reading game built in C using bitwise operations.
# 🧠 Mind Reading Magic Game in C

An interactive console-based puzzle game built in C that identifies a user's hidden choice from a grid of names/numbers using efficient bitwise logic.

## 🚀 Features
- Interactive Command Line Interface (CLI).
- Uses efficient **Bitwise Masking** to store and evaluate states.
- Zero external dependencies (uses standard C libraries).

## 🛠️ How it Works
1. The program displays a list of 10 names/numbers.
2. The user thinks of any one name.
3. The program displays 5 different rows.
4. The user enters the row numbers where their chosen name appears.
5. The program instantly reveals the secret name using binary masks!

## 🔧 How to Run
Compile the program using any standard C compiler (like GCC):
```bash
gcc main.c -o mind_reader
./mind_reader
