#include "gene.h"
#include <string>
#include <iostream>
using namespace std;

void get_dna(ifstream& infile, ofstream& outfile, string& dna_seq) {
    infile >> dna_seq;

    // for (int i = 0; i < dna_seq.length(); i++) {
    //     if (dna_seq[i] != 'A' || dna_seq[i] != 'T' || dna_seq[i] != 'G' || dna_seq[i] != 'C') {
    //         cout << "Invalid DNA sequence, exiting program." << endl;
    //         safe_exit_program(infile, outfile);
    //     }
    // }
}

void safe_exit_program(ifstream& infile, ofstream& outfile) {
    infile.close();
    outfile.close();
    exit(1);
}

void convert_to_rna(ifstream& infile, ofstream& outfile, const string dna_seq, string& rna_seq) {
    for (int i = find_tataa(infile, outfile, dna_seq); i < dna_seq.length(); i++) {
        if (dna_seq[i] == 'T') {
            rna_seq += 'U';
        }
        else if (dna_seq[i] == 'A') {
            rna_seq += 'A';
        } else if (dna_seq[i] == 'C') {
            rna_seq += 'C';
        } else if (dna_seq[i] == 'G') {
            rna_seq += 'G';
        }
    }

    outfile << rna_seq << endl;
}
int find_tataa (ifstream& infile, ofstream& outfile, const string dna_seq) {
    char base_check[5];
    string seq_of_5 = "";
    int end_of_tataa_index = 0;

    for (int i = 4; i < dna_seq.length(); i++) {
        seq_of_5 = "";
        base_check[4] = dna_seq[i];
        base_check[3] = dna_seq[i-1];
        base_check[2] = dna_seq[i-2];
        base_check[1] = dna_seq[i-3];
        base_check[0] = dna_seq[i-4];

        for (int j = 0; j < 5; j++) {
            seq_of_5 += base_check[j];
        }

        if (seq_of_5 == "TATAA") {
            end_of_tataa_index = i + 1;
            return end_of_tataa_index;
        } else {
            end_of_tataa_index = -1;
        }
    }

    if (end_of_tataa_index == -1) {
        cout << "TATAA not found, exiting program." << endl;
        safe_exit_program(infile, outfile);
    }
    return end_of_tataa_index;
}
void convert_to_amino(const string rna_seq, string& amino_seq) {

}