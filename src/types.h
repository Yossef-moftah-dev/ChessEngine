// to include this header file once while building the project
#pragma once
// lib to include advanced int types
#include<cstdint>
// lib to include strings
#include<string>

// uint8_t : unassigned integer of 8 bits, no bits for twaddling or sign
// using : modern version of typedef
using Color = uint8_t;
using Piece = uint8_t;
// ?
using HuffmanPieceValue = uint8_t;
using Position = uint8_t;
using Bitboard = uint64_t;
using File = int8_t;
using Rank = int8_t;
using Diagonal = int8_t;
// !! typing error
using Antidialgonal = int8_t;
// ?
using Ply = int8_t;
using HistoryPly = int16_t;
using CastlingPermission = uint8_t;
using MoveValue = uint32_t;
using MoveString = std::string;
using MoveCount = uint8_t;
using Score = int16_t;
using MoveScore = int32_t;
// ?
using Tropism = int8_t;
using ZobristKey = uint64_t;
using Magic = uint64_t;
using Time = int32_t;
using State = uint64_t;
// ?
using TfFlag = uint8_t;
using ThreadId = uint8_t;
// ?
using AbdadaMoveKey = uint64_t;
using PieceCounter = uint64_t;


// Evaluation
using Phase = uint8_t;
using PhaseStage = uint8_t;
using PhaseScore = int32_t;


using Fen = std::string;