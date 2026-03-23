# TranslationSim - Transcription and Translation Simulator

A C++ project that takes a text file containing a DNA seq with a TATAA seq, transcribing to RNA and translating into amino acids.

---

## Files

### gene.h
Header file containing declarations of the functions used to modify the DNA sequence

- **Language:** C++
- **Related File:** gene.cpp

---

### gene.cpp
Source file containing definitions of the functions used to modify the DNA sequence

- **Language:** C++
- **Libraries:** iostream, fstream, string
- **Input:** N/A
- **Output:** N/A

---

### main.cpp
Main source file for running the program

- **Language:** C++
- **Libraries:** iostream, fstream, string
- **Input:** Text file of DNA sequence (A, C, T, and G) and must contain a TATAA sequence
- **Output:** Text file with RNA sequence, transcribed from the DNA sequence

---

## How to use
1. Download files
2. Upload text file containing DNA sequence under /cmake-build-debug directory, name it "dna.txt"
3. Run the entire project
4. View the created "rna.txt file under /cmake-build-debug directory

An example dna.txt file has been added for you to test, you can delete this file if you wish to add your own.

---