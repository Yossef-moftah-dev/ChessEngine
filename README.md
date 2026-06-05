C++ High-Performance Chess Engine

Learn Algorithm : Code -> Dry Run -> Theory

phase 1 : Minimum Viable Chess Engine:
1- Board representation (bitboards)
2- Legal move generation
3- Basic evaluation (piece values)
4- Minimax search (simple depth-limited)
5- A CLI that plays moves

'''
ChessEngine/src/
├── board.cpp         // Board state & move representation
├── movegen.cpp       // Generate legal moves
├── evaluation.cpp    // Score positions
├── search.cpp        // Minimax/alphabeta
└── main.cpp          // CLI interface
'''