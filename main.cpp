#include "gene.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string dna_sequence = "";
    string rna_sequence = "";

    string inputfile = "";
    string outputfile = "";

    ifstream infile;
    ofstream outfile;

    infile.open("dna.txt");
    outfile.open("rna.txt");

    if (!infile.is_open()) {
        cout << "Error opening file, exiting program. " << endl;
        safe_exit_program(infile, outfile);
    }

    if (!outfile.is_open()) {
        cout << "Error opening file, exiting program. " << endl;
        safe_exit_program(infile, outfile);
    }

    // cout << "Enter the DNA sequence file: ";
    // cin >> inputfile;
    // cout << "You entered: " << inputfile << endl;
    //
    // infile.open(inputfile);
    //
    // if (!infile.is_open()) {
    //     cout << "Error opening file, exiting program. " << endl;
    //     safe_exit_program(infile, outfile);
    // }
    //
    // cout << "Enter output file: ";
    // cin >> outputfile;
    // cout << "You entered: " << outputfile << endl;
    //
    // outfile.open(outputfile);
    //
    // if (!outfile.is_open()) {
    //     cout << "Error opening file, exiting program. " << endl;
    //     safe_exit_program(infile, outfile);
    // }

    get_dna(infile, outfile, dna_sequence);
    convert_to_rna(infile, outfile, dna_sequence, rna_sequence);

}