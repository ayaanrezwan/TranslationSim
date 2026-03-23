#ifndef GENESTUFF_GENE_H
#define GENESTUFF_GENE_H

#include <string>
#include <fstream>
using namespace std;

void get_dna(ifstream& infile, ofstream& outfile, string& dna_seq);
void safe_exit_program(ifstream& infile, ofstream& outfile);
void convert_to_rna(ifstream& infile, ofstream& outfile, const string dna_seq, string& rna_seq);
int find_tataa (ifstream& infile, ofstream& outfile, const string dna_seq);
void convert_to_amino(const string rna_seq, string& amino_seq);

#endif //GENESTUFF_GENE_H