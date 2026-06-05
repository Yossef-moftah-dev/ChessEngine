# C++ High-Performance Chess Engine

A highly optimized chess engine written in modern C++, focusing on performance, efficiency, and clean architecture.

## 📖 Learning Methodology
This project follows a structured engineering workflow:
$$\text{Code} \longrightarrow \text{Dry Run} \longrightarrow \text{Theory}$$

---

## 🗺️ Project Roadmap: Phase 1
### Minimum Viable Chess Engine
The primary goal of Phase 1 is to establish a fully functional, bug-free core capable of playing a complete game of chess via the command line.

1. **Board Representation:** Implementing high-performance **Bitboards** to track pieces and board states.
2. **Legal Move Generation:** Developing an accurate, optimized move generator covering all legal chess mechanics.
3. **Basic Evaluation:** Scoring static positions using traditional piece values.
4. **Minimax Search:** Implementing a simple, depth-limited search algorithm.
5. **Command Line Interface (CLI):** A lightweight interactive interface to play moves against the engine.

---

## 📁 Project Structure

```text
ChessEngine/
└── src/
    ├── board.cpp       # Board state, bitboards, and move representation
    ├── movegen.cpp     # Legal and pseudo-legal move generation logic
    ├── evaluation.cpp  # Position scoring heuristic engine
    ├── search.cpp      # Minimax and alpha-beta pruning algorithms
    └── main.cpp        # CLI interface and main application loop